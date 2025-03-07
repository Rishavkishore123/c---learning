#include <bits/stdc++.h>
using namespace std;

void findLucky(string str){
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='4' || str[i]=='7'){
            count++;
        }
    }

    if(count==4 || count==7) 
    cout<<"YES";
    else
    cout<<"NO";
}

int main(){
    string m;
    cin>>m;
    findLucky(m);
    return 0;
}