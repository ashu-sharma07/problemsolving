#include <iostream>
using namespace std;

// power function returns base raise to the power exponent 

long pow(long long int base, long long int exponent){
    long long int result = 1;
    for(int i=1; i<=exponent; i++){
        result*=base;
    }
    return result;
}

int main(){
    int digit, place;
    long long int n;
    long long int binaryNumber = 0;
    cin>>n;
    place=0;
    while(n!=0){
        digit = n%2;
        n /= 2;
        binaryNumber+=pow(10,place)*digit;
        place++;
    }
    cout<<binaryNumber<<endl;
    return 0;
}
