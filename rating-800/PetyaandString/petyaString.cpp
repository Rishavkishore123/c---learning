#include <bits/stdc++.h>
using namespace std;

int findLexical(string str1, string str2){
    int count=0;
    for(int i=0;i<str1.length();i++){
        if(tolower(str1[i])>tolower(str2[i])){
            return 1;
        }

        else if(tolower(str1[i])<tolower(str2[i])){
            return -1;
        }
 
    }
    return 0;
}

int main(){
    string a,b;
    cin>>a>>b;

    cout<<findLexical(a,b);
    return 0;
}