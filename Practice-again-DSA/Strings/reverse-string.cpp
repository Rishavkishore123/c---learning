

// #include <iostream>
// using namespace std;

// void reverseString(string &s){
//        int n= s.length();
//       for(int i=0;i<n/2;i++){
//             char temp= s[i];
//             s[i]=s[n-1-i];
//             s[n-1-i]= temp;
//        }
// }

// int main(){
//         string s;
//         cin>>s;
//         reverseString(s);

//         cout<<"The string can be reversed:"<<s<<endl;
// }

// Reverse a String
// input: Geeks
// output: skeeG
// #include<iostream>
// using namespace std;

// string reverseString(string s1){
//         string ans="";
//         for(int i=s1.size();i>=0;i--){
//                 ans+=s1[i];
//         }

//         return ans;
// }

// int main(){
//         string s1="Geeks";

//         cout<<"Reverse String:"<<reverseString(s1)<<endl;
//         return 0;
// }

// input: Rishav
// output: vahsir
// #include<iostream>
// using namespace std;

// string reversedString(string s1){
//         int n=s1.size();

//         for(int i=0;i<=n/2;i++){
//                 char temp= s1[i];
//                 s1[i]=s1[n-i-1];
//                 s1[n-i-1]=temp;
//         }

//         return s1;
// }

// int main(){
//         string s1="Geeks";

//         cout<<"Reverse String:"<<reversedString(s1)<<endl;
//         return 0;
// }

// check whether the string is pallindrome or not

// Input: s = "abba"
// Output: true

// #include<iostream>
// using namespace std;

// bool checkPallindrome(string s1){
//         int left=0;
//         int high=s1.size()-1;
//         while(left<=high){
//                 if(s1[left]!=s1[high]){
//                         return false;
//                         break;
//                 }
//                 else{
//                         left++;
//                         high--;
//                 }
//         }

//         return true;
// }

// int main(){
//         string s1="abba";
//         cout<<"Result:"<<(checkPallindrome(s1)? "true":"false");
//         return 0;
// }

// you have a string Program to count the number of vowels and consonants
// Input: S = “geeksforgeeks”
// Output:
// vowel:5
// consonent:8

// #include <iostream>
// #include <cctype>
// using namespace std;

// void findvowelConsonent(string s1)
// {
//         int vowelCount = 0;
//         int consonentCount = 0;

//         for (int i = 0; i < s1.size(); i++)
//         {
//                 char ch = tolower(s1[i]);
//                 if (isalpha(ch))
//                 {
//                         if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u')
//                         {
//                                 vowelCount++;
//                         }
//                         else
//                         {
//                                 consonentCount++;
//                         }
//                 }
//         }
//         cout << "vowels:" << vowelCount << endl;
//         cout << "consonent:" << consonentCount << endl;
// }

// int main()
// {
//         string s1;
//         cout << "Enter the String:" << endl;
//         getline(cin, s1);
//         findvowelConsonent(s1);

//         return 0;
// }


// Sorting
// Binary Trees 


// Look and Say Problem

// Given an integer n. Return the nth row of the following look-and-say pattern.
// 1
// 11
// 21
// 1211
// 111221
// Look-and-Say Pattern:

// To generate a member of the sequence from the previous member, read off the digits of the previous member, counting the number of digits in groups of the same digit. For example:

// 1 is read off as "one 1" or 11.
// 11 is read off as "two 1s" or 21.
// 21 is read off as "one 2, then one 1" or 1211.
// 1211 is read off as "one 1, one 2, then two 1s" or 111221.
// 111221 is read off as "three 1s, two 2s, then one 1" or 312211.
// Example 1:

// Input:
// n = 5
// Output: 111221
// Explanation: The 5th row of the given pattern
// will be 111221.

