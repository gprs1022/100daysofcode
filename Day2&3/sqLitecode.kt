import android.annotation.SuppressLint
import android.content.ContentValues
import android.content.Context
import android.database.sqlite.SQLiteDatabase
import android.database.sqlite.SQLiteOpenHelper

data class User(val id: Int, val email: String, val password: String)
data class Note(val id: Int, val title: String, val content: String, val userId: Int)

class DatabaseHelper(context: Context) : SQLiteOpenHelper(context, DATABASE_NAME, null, DATABASE_VERSION) {

    companion object {
        private const val DATABASE_NAME = "notes.db"
        private const val DATABASE_VERSION = 1

        private const val TABLE_USERS = "users"
        private const val TABLE_NOTES = "notes"
        private const val COLUMN_ID = "id"
        private const val COLUMN_EMAIL = "email"
        private const val COLUMN_PASSWORD = "password"
        private const val COLUMN_TITLE = "title"
        private const val COLUMN_CONTENT = "content"
        private const val COLUMN_USER_ID = "user_id"
    }

    override fun onCreate(db: SQLiteDatabase?) {
        val createUserTableQuery = "CREATE TABLE $TABLE_USERS ($COLUMN_ID INTEGER PRIMARY KEY AUTOINCREMENT, $COLUMN_EMAIL TEXT, $COLUMN_PASSWORD TEXT)"
        db?.execSQL(createUserTableQuery)

        val createNoteTableQuery = "CREATE TABLE $TABLE_NOTES ($COLUMN_ID INTEGER PRIMARY KEY AUTOINCREMENT, $COLUMN_TITLE TEXT, $COLUMN_CONTENT TEXT, $COLUMN_USER_ID INTEGER, FOREIGN KEY($COLUMN_USER_ID) REFERENCES $TABLE_USERS($COLUMN_ID))"
        db?.execSQL(createNoteTableQuery)
    }

    override fun onUpgrade(db: SQLiteDatabase?, oldVersion: Int, newVersion: Int) {
        // Handle database upgrade if needed
    }

    fun insertUser(email: String, password: String): Long {
        val db = writableDatabase
        val values = ContentValues().apply {
            put(COLUMN_EMAIL, email)
            put(COLUMN_PASSWORD, password)
        }
        val userId = db.insert(TABLE_USERS, null, values)
        db.close()
        return userId
    }

    fun getUser(email: String, password: String): User? {
        val db = readableDatabase
        val selection = "$COLUMN_EMAIL = ? AND $COLUMN_PASSWORD = ?"
        val selectionArgs = arrayOf(email, password)
        val cursor = db.query(TABLE_USERS, null, selection, selectionArgs, null, null, null)
        val user: User? = if (cursor.moveToFirst()) {
            User(
                cursor.getInt(cursor.getColumnIndexOrThrow(COLUMN_ID)),
                cursor.getString(cursor.getColumnIndexOrThrow(COLUMN_EMAIL)),
                cursor.getString(cursor.getColumnIndexOrThrow(COLUMN_PASSWORD))
            )
        } else {
            null
        }
        cursor.close()
        db.close()
        return user
    }

    fun insertNote(userId: Int, note: Note) {
        val db = writableDatabase
        val values = ContentValues().apply {
            put(COLUMN_TITLE, note.title)
            put(COLUMN_CONTENT, note.content)
            put(COLUMN_USER_ID, userId)
        }
        db.insert(TABLE_NOTES, null, values)
        db.close()
    }

    @SuppressLint("Recycle")
    fun getAllNotes(userId: Int): List<Note> {
        val noteList = mutableListOf<Note>()
        val db = readableDatabase
        val query = "SELECT * FROM $TABLE_NOTES WHERE $COLUMN_USER_ID = ?"
        val cursor = db.rawQuery(query, arrayOf(userId.toString()))

        while (cursor.moveToNext()) {
            val id = cursor.getInt(cursor.getColumnIndexOrThrow(COLUMN_ID))
            val title = cursor.getString(cursor.getColumnIndexOrThrow(COLUMN_TITLE))
            val content = cursor.getString(cursor.getColumnIndexOrThrow(COLUMN_CONTENT))

            val note = Note(id, title, content, userId)
            noteList.add(note)
        }

        cursor.close()
        db.close()
        return noteList
    }

    fun getNoteByID(noteId: Int): Note {
        val db = readableDatabase
        val query = "SELECT * FROM $TABLE_NOTES WHERE $COLUMN_ID = $noteId"
        val cursor = db.rawQuery(query, null)
        cursor.moveToFirst()

        val userId = cursor.getInt(cursor.getColumnIndexOrThrow(COLUMN_USER_ID))
        val title = cursor.getString(cursor.getColumnIndexOrThrow(COLUMN_TITLE))
        val content = cursor.getString(cursor.getColumnIndexOrThrow(COLUMN_CONTENT))

        cursor.close()
        db.close()
        return Note(noteId, title, content, userId)
    }

    fun updateNote(note: Note) {
        val db = writableDatabase
        val values = ContentValues().apply {
            put(COLUMN_TITLE, note.title)
            put(COLUMN_CONTENT, note.content)
        }

        val whereClause = "$COLUMN_ID = ? AND $COLUMN_USER_ID = ?"
        val whereArgs = arrayOf(note.id.toString(), note.userId.toString())
        db.update(TABLE_NOTES, values, whereClause, whereArgs)
        db.close()
    }

    fun deleteNote(noteId: Int, userId: Int) {
        val db = writableDatabase
        val whereClause = "$COLUMN_ID = ? AND $COLUMN_USER_ID = ?"
        val whereArgs = arrayOf(noteId.toString(), userId.toString())
        db.delete(TABLE_NOTES, whereClause, whereArgs)
        db.close()
    }
}
