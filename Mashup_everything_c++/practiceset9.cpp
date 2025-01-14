#include<iostream>
using namespace std;
int main(){
    int length,breadth,area,perimeter;
    cout<<"Enter the value of length"<<endl;
    cin>>length;
    cout<<"Enter the value of breadth"<<endl;
    cin>>breadth;
    area=length*breadth;
    perimeter=2*(length+breadth);
    if(area>perimeter){
        cout<<"Area is greater than perimeter";
    }
    else{
        cout<<"Perimeter is greater than area";
    }
    return 0;
    }