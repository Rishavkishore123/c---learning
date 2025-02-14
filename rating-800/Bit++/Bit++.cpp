#include <bits/stdc++.h>
using namespace std;

int findValue(int n){
    int x=0;
    string statement;

    while(n--){
        cin>>statement;
        if(statement[1]=='+'){
            x++;
        }else{
            x--;
        }
    }
    return x;

}

int main(){
    int n;
    cin>>n;

    cout<<findValue(n);
    return 0;

}