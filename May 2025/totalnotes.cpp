#include<iostream>

using namespace std;

int main(){
    int amount,note, totalnotes;
    cout<<"Enter the amount;"<<endl;
    cin>>amount>>note;
    totalnotes=amount/note;
    cout<<"Total notes are "<<totalnotes<<endl;
    return 0;

}