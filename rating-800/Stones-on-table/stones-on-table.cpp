#include <bits/stdc++.h>
using namespace std;

int pointoutDifferent(int n, string str){
    int count=0;
    for(int i=1;i<n;i++){
        if(str[i]==str[i-1]){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    string a;
    cin>>n>>a;

    cout<<pointoutDifferent(n,a);

    return 0;
}
