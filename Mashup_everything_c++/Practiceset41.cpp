#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="DJDGIAJ";
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
            //convert into cappital into small letter
        }
    }
    cout<<str<<endl;
    return 0;
}