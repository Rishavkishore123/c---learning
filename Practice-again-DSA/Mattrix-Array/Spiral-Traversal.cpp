// You are given a rectangular matrix mat[][] of size n x m, and your task is to return an array while traversing the matrix in spiral form.

// Examples:

// Input: mat[][] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]
// Output: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10]



       |
#include <vector>
#include <iostream>
using namespace std;

vector<int> spiralMattrix(vector<vector<int>> &mat){
    vector<int>ans;
    int top=0;
    int left=0;
    int right=mat[0].size()-1;
    int bottom= mat.size()-1;
    
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(mat[top][i]);
        }
        top++;

        for(int i=top;i<=bottom;i++){
            ans.push_back(mat[i][right]);
        }
        right--;

        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(mat[i][left]);
            }
            left++;
        }


    }

    return ans;
}

int main(){
    vector<vector<int>>mat={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    vector<int>result=spiralMattrix(mat);
    cout<<"Spiral Matrix:"<<endl;
    for(int i=0;i<=result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}