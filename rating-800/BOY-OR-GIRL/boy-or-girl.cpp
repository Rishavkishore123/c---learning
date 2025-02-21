#include <bits/stdc++.h>
using namespace std;

void findboyorGirl(string str){
        int count=0;
        sort(str.begin(), str.end());
        for(int i=0;i<str.size()-1;i++){
            if(str[i]!=str[i+1]){
                count++;
            }
            
        }
        count++;
        

        if(count%2==0){
            cout<<"CHAT WITH HER!";
        }else{
            cout<<"IGNORE HIM!";
        }

}




int main(){
    string a;
    cin>>a;
    findboyorGirl(a);
    return 0;
}

