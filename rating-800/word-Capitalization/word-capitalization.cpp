#include <bits/stdc++.h>
using namespace std;

 string findCapital(string word){
    if(word[0]>='a' && word[0]<='z')
    {
        int i=word[0]-'a';
        word[0]= 'A'+i;

    }
    return word;
}

int main(){
    string a;
    cin>>a;
    cout<<findCapital(a);
    return 0;

}



