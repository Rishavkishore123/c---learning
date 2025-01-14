/*

Given two arrays a[] and b[], the task is to find the number of elements in the union between these two arrays.

The Union of the two arrays can be defined as the set containing distinct elements from both arrays. If there are repetitions, 
then only one element occurrence should be there in the union.

Note: Elements of a[] and b[] are not necessarily distinct.

Examples

Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3]
Output: 5
Explanation: Union set of both the arrays will be 1, 2, 3, 4 and 5. So count is 5.

*/

// #include <bits/stdc++.h> ---> this includes all the library

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int union2Array(int a[],int n, int b[], int m){
    set<int>st;
    int count=0;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }

    for(int i=0;i<m;i++){
        st.insert(b[i]);
    }

    count=st.size();
    return count;
}

int main(){
    int a[]={1,2,3,4,5};
    int b[]={2,3,5,8,9};
    
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);

    int ans= union2Array(a,n,b,m);
    cout<<"This is the answer of union2Array:"<<ans<<endl;
    return 0;
}

