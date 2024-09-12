
#include <iostream>

 using namespace std;
 int main() {
     float s;
     float m;
     cin >>m,s;
     if (m*30.48<s) {
         cout <<0;
     }
     else{
         cout<<1;
     }
     return 0;
 }
