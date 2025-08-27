


// // *
// // **
// // ***
// // ****       *
// // *************
// // ****       *
// // ***
// // **
// // *

// #include<iostream>
// using namespace std;

// int main(){
//     int n=9;
//     for(int i=1;i<=n/2;i++){
//        for(int j=1;j<=i;j++){
//         cout<<"*";
//        }
//        if(i==4){
//         cout<<"      *";
//        }
//        cout<<endl;
//     }
      
//     cout<<"************"<<endl;

//     for(int i=4;i>=0;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         if(i==4){
//             cout<<"      *";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//  @@@
//   @
// ***
// * *
// * *

// #include<iostream>
// using namespace std;

// int main(){
//     int n=3;
//     for(int i=0;i<n/2;i++){
//         for(int j=0;j<n/2;j++) {
//             cout<<" ";
//         }

//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }

//         for(int j=0;j<=n-(2*i);j++){
//             cout<<"@";
//         }

//         cout<<endl;
//     }

// }


//     *          
//  *  *

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}