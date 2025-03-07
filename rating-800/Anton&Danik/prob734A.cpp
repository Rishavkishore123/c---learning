#include <bits/stdc++.h>
using namespace std;

void findWon(string str, int n){
    int countA=0, countD=0;

    for(int i=0;i<n;i++){
        if(str[i]=='A') countA++;
        else countD++;
    }

    if(countA==countD) cout<<"Friendship";
    else if(countA>countD) cout<<"Anton";
    else cout<<"Danik";
}

int main(){
    int n;
    string a;
    cin>>n>>a;
    findWon(a,n);
    return 0;
}