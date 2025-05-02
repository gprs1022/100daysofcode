#include<iostream>
using namespace std;
int main(){

    int d,m,y;
    cout<<"Enter the date"<<endl;
    cin>>d>>m>>y;
    if(y=1900 && y<=9999){
        if(m>=1 && m<=12){
            if((d>=1 && d<=31) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)){

                cout<<"Valid date"<<endl;
            }
            else if((d>=1 && d<=30) && (m==4 || m==6 || m==9 || m==11)){
                cout<<"Valid date"<<endl;
            }
            else if((d>=1 && d<=28) && (m==2)){
                cout<<"Valid date"<<endl;
            }
            else if((d>=1 && d<=29) && (m==2)){
                cout<<"Valid date"<<endl;
            }
            else{
                cout<<"Invalid date"<<endl;

            }

        }
    }

    return 0;
}