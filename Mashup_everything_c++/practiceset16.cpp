#include<iostream>
using namespace std;
void function(int a,int b,int c,float *s,float *area){
        *s= (float)(a+b+c)/2;
        *area= (*s)*(*s-a)*(*s-b)*(*s-c);
}
    int main(){
        int a,b,c;
        float s,area;
        cout<<"Enter the value of a"<<endl;
        cin>>a;
        cout<<"Enter the value of b"<<endl;
        cin>>b;
        cout<<"Enter the value of c"<<endl;
        cin>>c;
        function(a,b,c,&s,&area);
        cout<<"The sum of triangle is "<<s<<endl;
        cout<<"The area of triangle is "<<area<<endl;
        return 0;
    }