#include <iostream>

 using namespace std;
int main() {
    float s;
    float m;
    cin>>s>>m;
    if (s>m*30.48) {
        cout <<0;
    }
    else{
        cout<<1;
    }
    return 0;
}
