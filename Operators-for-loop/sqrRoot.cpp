#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    while(n>=(i*i)){
        i++;
    }
    cout<<i-1<<endl;
    return 0;
}