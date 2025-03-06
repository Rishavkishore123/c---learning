#include <bits/stdc++.h>
using namespace std;

string findLower(string str){
    int countsmall=0, countbig=0;
    for(int i=0;i<str.size();i++){
        if(str[i]>=65 && str[i]<=90) countbig++;
        else  countsmall++;
    }
    
    if(countsmall>=countbig) {
        for(int i=0;i<str.size();i++){
            if(str[i]<97){
                str[i]=str[i]+32;
            }
        }
    }
    else{
        for(int i=0;i<str.size();i++){
            if(str[i]>=97){
                str[i]=str[i]-32;
            }
        }
    }

    return str;
}

int main(){
    string a;
    cin>>a;

    cout<<findLower(a);
    return 0;
}