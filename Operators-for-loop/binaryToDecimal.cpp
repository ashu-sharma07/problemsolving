#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int lastDigit, binaryNumber, place;
    int n;
    cin>>n;
    place=0;
    while(n!=0){
        lastDigit=n%10;
        n/=10;
        if(lastDigit==1){
            binaryNumber+=pow(2,place);
        }
        place++;
    }
    cout<<binaryNumber;
    return 0;
}