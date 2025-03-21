// Given a valid (IPv4) IP address, return a defanged version of that IP address.

// A defanged IP address replaces every period "." with "[.]".

 

// Example 1:

// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
// Example 2:

// Input: address = "255.100.50.0"
// Output: "255[.]100[.]50[.]0"

#include<iostream>
using namespace std;

string ipAddress(string address){
    string ans;
    for(int i=0;i<address.size();i++){
        if(address[i]=='.'){
            ans+="[.]";
        }
        ans+=address[i];
    }
    return ans;
}

int main(){
    string address="1.1.1.1";
    cout<<"IP address: "<<ipAddress(address)<<endl;
    return 0;
}