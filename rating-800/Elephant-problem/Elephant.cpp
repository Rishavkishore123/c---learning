#include <bits/stdc++.h>
using namespace std;

int findfriendHouse( int a){
    int result= a/5;
    if(a%5>0) result++;

    return result;
}

int main(){
    int a;
    cin>>a;
    cout<<findfriendHouse(a);
    return 0;
}