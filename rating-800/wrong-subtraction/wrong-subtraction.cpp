#include <bits/stdc++.h>
using namespace std;

int findSubtraction(int n, int k){
    for(int i=1;i<=k;i++){
        if(n%10==0){
            n/=10;
        }else{
            n=n-1;
        }
    }
    return n;
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<findSubtraction(n,k);
    return 0;

}