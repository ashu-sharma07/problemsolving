#include <iostream>
using namespace std;
int main(){
    int a[10];
    cout<<a<<endl;
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    a[0]=69;
    cout<<*a<<endl;
    a[1]=6969;
    cout<<*(a+1)<<endl;
    int *p = &a[0];
    cout<<p<<endl;
    return 0;
}