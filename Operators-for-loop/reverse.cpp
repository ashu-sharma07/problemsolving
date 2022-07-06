#include <iostream>
using namespace std;
int main(){
    int n, r, digit;
    cin>>n;
    r=0;
    while(n!=0){
        digit = n%10;
        r = r*10+digit;
        n=n/10;
    }
    cout<<r;
    return 0;
}