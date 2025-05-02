#include<iostream>
using namespace std;

int main(){
    int weekNumber;
    cout<<"Enter the week number:";
    cin>>weekNumber;
    if(weekNumber==1){
        cout<<"Monday";
    }
    else if(weekNumber==2){
        cout<<"Tuesday";
    }
    else if(weekNumber==3){
        cout<<"Wednesday";
    }
    else if(weekNumber==4){
        cout<<"Thursday";
    }
    else if(weekNumber==5){
        cout<<"Friday";
    }
    else if(weekNumber==6){
        cout<<"Saturday";
    }
    else if(weekNumber==7){
        cout<<"Sunday";
    }
    else{
        cout<<"Invalid week number";
    }
 return 0;
}