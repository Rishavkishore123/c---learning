#include <bits/stdc++.h>
using namespace std;


   int main(){

    string a, ans;
    cin>>a;

    int ones=0, twos=0, threes=0;

    for(int i=0;i<a.length();i++){
             if(a[i]=='1') ones++;
        else if(a[i]=='2') twos++;
        else if(a[i]=='3') threes++;
    }

    for(int i=0;i<ones;i++){
        ans+="1+";
    }
    for(int i=0;i<twos;i++) ans+="2+";
    for(int i=0;i<threes;i++)ans+="3+";

    ans.pop_back();
    cout<<ans<<endl;
    return 0;


}

