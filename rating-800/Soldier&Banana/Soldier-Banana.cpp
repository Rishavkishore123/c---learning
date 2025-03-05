#include <bits/stdc++.h>
using namespace std;

int findBorrow(int k, int n, int w){
    int totalcost=0;
    for(int i=1;i<=w;i++){
        totalcost+=i*k;
    }
    totalcost=totalcost-n;
    if(totalcost<0) return 0;

    return totalcost;
}

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    cout<<findBorrow(k,n,w);
    return 0;
}