#include <bits/stdc++.h>
using namespace std;

int findLargest(int a, int b){ 
    int count=0;
    while(a<=b){
        a*=3;
        b*=2;
        count++;
    }
    return count;

}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<findLargest(a,b);
    return 0;
}