#include <iostream>
using namespace std;

int isprime(int number){
    for(int d=2; d<number; d++){
        if(number%d==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    for(int i=2; i<=n; i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}