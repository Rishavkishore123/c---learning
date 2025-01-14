#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the positive number "<<endl;
    cin>>a;
    if(a%2==0){
        cout<<"It is an even number";
    }
    else{
        cout<<"It is an odd number";
    }
    return 0;
}