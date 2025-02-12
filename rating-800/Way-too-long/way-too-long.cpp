
#include <bits/stdc++.h>
using namespace std;

string way2Long(string str){
    int n= str.size();

    if(n>10){
        return str[0] + to_string(n-2)+ str[str.size()-1];
    }
    return str;
}

int main(){

    int n;
    cin>>n;
    vector<string> str(n);

    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    for(int i=0;i<n;i++){
        cout<<way2Long(str[i])<<endl;
    }

    return 0;

}

