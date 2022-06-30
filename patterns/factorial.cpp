#include <iostream>
using namespace std;

int fact(){
    int n, f;
    cin>>n;
    f=1;
    while (n>0)
    {
        f*=n;
        n--;
    }
    return f;
}


int main(){
    cout<<fact()<<endl;
    return 0;
}