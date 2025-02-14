#include <bits/stdc++.h>
using namespace std;

int findAnswer(int n){
    int count=0;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;

        if(x+y+z>=2){
            count++;
        }
    }

    return count;

}

int main(){
    int n;
    cin>>n;

    cout<<findAnswer(n)<<endl;
    return 0;

    
}