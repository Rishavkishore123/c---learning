//doing same question but finding answer in the  short way .....
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="mniodjhfi";
    transform (s.begin(), s.end(), s.begin(),::toupper);
      cout<<s<<endl;
      return 0;
} 