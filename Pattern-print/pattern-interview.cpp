// *
// *
// *
// *
// *

// #include <iostream>
// using namespace std;

// int main(){
//     int n=5;

//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=n-1;j++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }
//     return 0;
// }

// *
// **
// ***
// ****
// *****

// int main(){
//     int n=4;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }

//     return 0;
// }


// 1
// 12
// 123
// 1234
// 12345

// #include <iostream>
// using namespace std;

// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// 1
// 22
// 333
// 4444
// 55555

// #include <iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }

//         cout<<endl;
//     }
//     return 0;
// }

// *****
// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 12345
// 1234
// 123
// 12
// 1

// #include <iostream>
// using namespace std;

// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<j;
//         }
//         cout<<endl;

//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n=5;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<=n-i-1;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<2*i+1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n=5;

//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<=n-i-1;j++){
//             cout<<" ";
//         }

//         for(int k=0;k<2*i+1;k++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n=5;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }

//         for(int k=0;k<2*i+1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<2*i+1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 1
// 01
// 101
// 0101
// 10101

// #include <iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         int start=(i%2==0) ? 0:1;
//         for(int j=1;j<=i;j++){
//             cout<<start;
//             start=1-start;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 1     1
// 12   21
// 123 321
// 12344321

// #include<iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//             // middle spaces
//         for(int k=1;k<=2*(n-i);k++){
//             cout<<" ";
//         }
//         // print decreasing order
//         for(int t=i;t>=1;t--){
//             cout<<t;
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15


// #include <iostream>
// using namespace std;

// int main(){
//     int n=5;
//     int num=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;

//     }

//     return 0;
// }

// 1     1
// 12   21
// 123 321
// 12344321

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int k=1;k<2*(n-i);k++){
//             cout<<" ";
//         }
//         for(int t=i;t>=1;t--){
//             cout<<t;
//         }

//         cout<<endl;
//     }
//     return 0;
// }


