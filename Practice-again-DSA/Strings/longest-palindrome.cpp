/* 
Given a string s which consists of lowercase or uppercase letters, return the length of the longest 
palindrome
 that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.

*/

#include<vector>
#include<iostream>
using namespace std;

int longestPallindrome(string s){
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    //frequency ->means see how many letter comes in small letter and upper letter;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a') // through ascii value a=97, A=65;
        {
            lower[s[i]-'a']++;
        }else{
            upper[s[i]-'A']++;
        }
    }

    int count=0;
    bool odd=0;
    
    for(int i=0;i<26;i++){
        //lower
        if(lower[i]%2==0){
            count+=lower[i];
        }else{
            count+=lower[i]-1;
            odd=1;
        }

        //upper
        if(upper[i]%2==0){
            count+=upper[i];

        }else{
            count+=upper[i];
            odd=1;
        }
    }

    return count+odd;
}

int main(){
    string s="abcAAA";

    cout<<"LONGEST-PALLINDROME: "<<longestPallindrome(s)<<endl;
    return 0;
}