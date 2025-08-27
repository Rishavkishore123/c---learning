// Input: nums = [1,3,4,2,2]
// Output: 2

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={1,3,4,2,2};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int count=-1;
//     sort(arr,arr+n);
//     for(int i=1;i<n;i++){
//         if(arr[i]==arr[i-1]);
//         count=arr[i];
//         break;
//     }

//     cout<<count<<endl;
//     return 0; 
// }


// Find the second largest element in an array.
// Input:
//  [1,2,4,7,7,5]
// Output:
// Second Largest : 5

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int secondLargest(int arr[], int n){
//     sort(arr, arr+n);

//     for(int i=n-2;i>=0;i--){
//         if(arr[i]!=arr[n-1])
//         return arr[i];
//     }
//     return -1;
// }

// int main(){
//     int arr[]={1,2,4,7,7,5};
//     int size= sizeof(arr)/sizeof(arr[0]);
//     cout<<secondLargest(arr, size)<<endl;
//     return 0;
// }

