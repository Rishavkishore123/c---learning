#include<iostream>
using namespace std;
int main(){
    int a,b,c,sum;
    cout<<"Enter the angle of a in degrees"<<endl;
    cin>>a;
    cout<<"Enter the angle of b in degrees"<<endl;
    cin>>b;
    cout<<"Enter the angle of c in degrees"<<endl;
    cin>>c;
    
    if((a+b+c)==180){
        cout<<"The triangle is valid";
    }
    else{
        cout<<"The triangle is not valid";
    }
    return 0;
}