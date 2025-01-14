// Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.

// Examples:

// Input: arr[] = [0, 1, 2, 0, 1, 2]
// Output: [0, 0, 1, 1, 2, 2]

// without using any extra space and standard library,

#include <iostream>
using namespace std;

void sorttheNumber(int arr[], int n){
    int count0=0;
    int count1=0;
    int count2=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }

        else if(arr[i]==1) count1++;
        else if(arr[i]==2) count2++;
        
    }

    int index=0;

    for(int i=0;i<count0;i++){
        arr[index++]=0;
    }

    for(int i=0;i<count1;i++){
        arr[index++]=1;
    }

    for(int i=0;i<count2;i++){
        arr[index++]=2;
    }

}

int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sorttheNumber(arr,n);

    cout<<"Sorted Number:"<<" "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }

    cout<<endl;

    return 0;

}
