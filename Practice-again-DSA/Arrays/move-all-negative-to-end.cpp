// Given an unsorted array arr[ ] having both negative and positive integers. The task is to place all negative elements at the end of
//  the array without changing the order of positive elements and negative elements.

// Note: Don't return any array, just in-place on the array.

// Examples:

// Input : arr[] = [1, -1, 3, 2, -7, -5, 11, 6 ]
// Output : [1, 3, 2, 11, 6, -1, -7, -5]

1,3,2,11,6,-7,-5,-1;


#include <iostream>
using namespace std;

void moveallNegative(int arr[], int n){
    int left=0;
    int right=n-1;

    while(left<=right){
        if(arr[left]>0) left++;
        else if(arr[right]<0) right--;

       else{
            int temp= arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }  
    }
    
}

int main(){
    int arr[]={1, -1, 3, 2, -7, -5, 11, 6};
    int n=sizeof (arr)/sizeof (arr[0]);

    cout<<"Move all Numbers to end:" <<endl;
    moveallNegative(arr,n);
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }

    cout<<endl;
    
    return 0;

}