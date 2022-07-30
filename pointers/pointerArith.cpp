#include <iostream>
using namespace std;
int main(){
    int i = 69;
    int * p = &i;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    char k = 'a';
    char * kp = &k;
    cout<<kp<<endl;
    kp++;
    cout<<kp<<endl;
    return 0;
}