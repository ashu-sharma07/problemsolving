#include <iostream>
using namespace std;
int main(){
    int n, i, f1, f2, f3;
    cin>>n;
    f1=1;
    f2=1;
    i=1;
    while(i<n){
        f3=f1+f2;
        f1=f2;
        f2=f3;
        i++;
    }
    cout<<f1;
    return 0;
}