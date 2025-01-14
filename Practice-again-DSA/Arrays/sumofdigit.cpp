// int n=1234;
// This is the sum number
// #include<iostream>
// using namespace std;

// int sumofDigit(int n){
//     int sum=0;
//     while(n>0){
//         sum+=n%10;
//         n=n/10;
//     }

//     return sum;
// }

// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;

//     int ans= sumofDigit(n);
//     cout<< "sum of digit:"<<ans<<endl;

//     return 0;
// }

// print prime number whose less than that number
// for example: 10
// output: 1,2,3,5,7

// #include<iostream>
// using namespace std;
// // The logic is to check the is that number is prime or not
// bool isPrime(int n){
//     int count=1;
//     for(int i=2;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }
//     if(count!=2){
//         return false;
//     }
//     return true;
// }

// int main(){
//     int n;
//     cout<<"Enter the Number"<<endl;
//     cin>>n;

//     for(int i=0;i<=n;i++){
//         if(isPrime(i)){
//             cout<<i<<""<<endl;
//         }
//     }
//     return 0;
// }

// find the missing number

// arr[]={1,2,4,5}
// output= 3

// #include<iostream>
// using namespace std;

// int findmissingNumber(int arr[], int size){
//     int sum=0;
//     int n= size +1;
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//     }
//    int totalsum = n*(n+1)/2;
//     int ans= totalsum-sum;

//     return ans;
// }

// int main(){
//     int arr[]= {1,2,4,5};
//     int size= sizeof(arr)/sizeof(arr[0]);

//      int printMissingNumber= findmissingNumber(arr, size);
//     cout<<"Missing Number:" <<printMissingNumber;

//     return 0;
// }

// find pallindrome number
// int n1= 121 tell me in true or false 
//  output: true


// #include<iostream>
// using namespace std;

// int checkPallindrome(int n){
//     int original=n;
//     int reversed=0;
//     while(n>0){
//         int digit= n%10;
//         reversed= reversed*10+digit;
//         n=n/10;
//     }

//     return reversed==original;
// }

// int main(){
//     int n;
//     cout<<"Enter the Number"<<endl;
//     cin>>n;

//     if(checkPallindrome(n)){
//         cout<<"true"<<endl;
//     }else{
//         cout<<"false"<<endl;
//     }

//     return 0;
// }



// factorial of a number
//  int n=5;
// output: 120;

// #include<iostream>
// using namespace std;
// int factorialNumber(int n){

//     if(n==1 || n==0) return 1;

//     int ans= n*factorialNumber(n-1);

//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the Number"<<endl;
//     cin>>n;

//     int ans= factorialNumber(n);

//     cout<<"Print the result:"<< ans<<endl;

//     return 0;
// }


// reverse a string
// string s1="hello";
// output: olleh

// #include<iostream>
// using namespace std;

// void reverseString(string s1){
//     string ans="";
//     for(int i=s1.size()-1;i>=0;i--){
//         ans+=s1[i];
//     }

//     cout<<"Reverse a String:" << ans<<""<<endl;
// }

// int main(){
//     string s1="hello";
//     reverseString(s1);

//     return 0;
// }

// 2- sum problem
// fibonacchi series

// check anagrams

// input: s1= listen s2= silent
// output: true;

// #include<algorithm>
// #include<iostream>
// using namespace std;

// bool checkAnagram(string s1, string s2){
//     if(s1.size()!=s2.size()) return false;

//     sort(s1.begin(), s1.end());
//     sort(s2.begin(),s2.end());

    
// }

// // int main(){
//     string s1="listen";
//     string s2= "silenz";

    

//     cout<<"Strings are Anagrams:"<<checkAnagram(s1,s2) ? "true":"false" ;
//     return 0;
// }


// Fibonacchi Series

// input=5;
// 0,1,1,2,3

// #include<iostream>
// using namespace std;

// void findFiboonachin(int n){
//     int a=0;
//     int b=1;
//     int c=0;
//     cout<<"The Fibonacchi terms:"<<a<<","<<b;
//     for(int i=2;i<n;i++){
//         c=a+b;
//         cout<<","<<c;
//         a=b;
//         b=c;
//     }
//     cout<<endl;

// }

// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;

//     findFiboonachin(n);

// }


// 2-Sum Problem

// input arr[]={1,2,3,4,5,7,8}
// target=9;
// output: {2,7}

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// vector<int> findtwoSum(vector<int>&arr, int target){
//  unordered_map<int,int>mpp;
//  for(int i=0;i<arr.size();i++){
//     int remaining= target-arr[i];
//     if(mpp.find(remaining)!=mpp.end()){
//         return {remaining, arr[i]};
//     }
//     mpp[arr[i]]=i;

//  }

//  return {};

// }

// int main(){
//     vector<int>arr={11,1,2,4,7};
//     int target=9;

//     vector<int>ans=findtwoSum(arr, target);
//     if(!ans.empty()){
//         cout<<"{"<<ans[0]<<","<<ans[1]<<"}"<<endl;
//     }else{
//         cout<<"No Pair found"<<endl;
//     }

//    return 0;
// }



  




