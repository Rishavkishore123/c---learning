#include<iostream>
using namespace std;
int main(){
    int marks[6];
    for(int i=0;i<6;i++){
        cout<<"Enter the marks "<<i<<"th student"<<endl;
        cin>>marks[i];
    }
    for(int i=0;i<6;i++){
        cout<<"Marks of "<<i<<"th student"<<marks[i]<<endl;
    }
    return 0;
}