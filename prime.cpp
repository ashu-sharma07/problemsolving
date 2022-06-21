#include <iostream>
#include <string>
using namespace std;


string isprime(int n){
    int d = 2;
    while(d<n){
        if(n%d==0){
            return "Not prime\n";
        }
        d++;
    }
    return "prime\n";
}






int main(){
    int n;
    cin >> n;
    cout << isprime(n);
    return 0;
}