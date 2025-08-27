#include <bits/stdc++.h>
using namespace std;

int findSolution(vector<int>& arr, int k){
    int ans=0;
    int sum=0;
    int left=0;
    int right=arr.size()-1;

    sort(arr.begin(),arr.end());

    while(left<right){
        sum=arr[left]+arr[right];

        if(sum==k) {
            ans++;
            left++;
            right--;
        }

        else if(sum>k){
            right--;
        }
        else{
            left++;
        }
    }
    return ans;
}

int main(){ 
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<findSolution(arr,k);
    return 0;
}