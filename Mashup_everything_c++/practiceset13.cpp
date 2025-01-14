#include <iostream>
using namespace std;
int main(){
    int i,timeworked,overtime,overtimepay;
    for(i=1;i<=10;i++){
        cout<<"Enter the time of employee in an hour"<<endl;
        cin>>timeworked;
        if(timeworked>40){
            overtime=timeworked-40;
            overtimepay=overtimepay+(12*overtime);
        }
    }
    cout<<"Total overtime payy of 10 employee is "<<overtimepay<<endl;
    return 0;
}