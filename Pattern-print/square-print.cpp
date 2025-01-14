
// input=4;
// ****
// ****
// ****


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }
//         cout<<"*"<<endl;
//     }

//     cout<<endl;
//     return 0;
// }


// input n=4
// *
// *
// *
// ******

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
    
//     for(int i=0;i<=n;i++){
//         cout<<"*"<<endl;
//         for(int j=n;j<=n;j++){
//             cout<<"*";
//         }
//     }

//     cout<<endl;
//     return 0;

// }

// some making patterns and some making sql queries on joins

// input-5

// output
// 1  
// 1 2  
// 1 2 3  
// 1 2 3 4  
// 1 2 3 4 5  

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the Number"<<endl;
//     cin>>n;

//     for(int i=1;i<n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<"";
//         }
//         cout<<endl;
//     }

//     cout<<endl;
//     return 0;
    
// }

// input n=5
// output
// * * * * *  
// * * * *  
// * * *  
// * *  
// *  

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the Number"<<endl;
//     cin>>n;

//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=n-i;j++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

// input n=5

// Output
//         *    |            1    |            A
//       * *    |          1 2    |          A B
//     * * *    |        1 2 3    |        A B C
//   * * * *    |      1 2 3 4    |      A B C D
// * * * * *    |    1 2 3 4 5    |    A B C D E


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the Number"<<endl;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }

//         for(int k=1;k<=i;k++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }

//         for(int k=1;k<=i;k++){
//             cout<<k;
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// output

//          *           |           1           |           A
//        * * *         |         1 2 3         |         A B C
//      * * * * *       |       1 2 3 4 5       |       A B C D E
//    * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
//  * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the Number"<<endl;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }

//         for(int k=1;k<=(2*i-1);k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     cout<<endl;
//     return 0;


// }
