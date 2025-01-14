#include <iostream>
using namespace std;
int main(){
    int cp,sp,profit,loss;
    cout<<"Enter the cp price "<<endl;
    cin>>cp;
    cout<<"Enter the sp price "<<endl;
    cin>>sp;
    profit=sp-cp;
    loss=cp-sp;
    if(sp>cp){
        cout<<"The seller produces profit is "<<profit<<endl;
    }
    else if(sp<cp)
    {
        cout<<"The seller produces loss is "<<loss<<endl;
    }
    else{
        cout<<"No profit no loss ";
    }
    return 0;
}