#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, arr[100], count=0;
    cin>>n>>k;

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    for(int j=1;j<=n;j++){
        if(arr[j]>0 && arr[j]>=arr[k]  ){
            count=count+1;
        }
    }
    cout<<count<<endl;
   
}


