#include<iostream>
using namespace std;
void sumAndavg(int a,int b,int c,int *sum,float *avg){
    *sum=(a+b+c);
    *avg=(float)(*sum)/2;
}
    int main(){
        int a,b,c,sum;
        float avg;
        cout<<"Enter the value of a "<<endl;
        cin>>a;
        cout<<"Enter the value of b "<<endl;
        cin>>b;
        cout<<"Enter the value of c "<<endl;
        cin>>c;
        sumAndavg(a,b,c,&sum,&avg);
        cout<<"The sum of these number is "<<sum<<endl;
        cout<<"The average of these number is "<<avg<<endl;
        return 0;
    }