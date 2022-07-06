#include <iostream>
using namespace std;

int nSum(int num){
    int sum=0;
    for(int i=1; i<=num; i++){
        sum+=i;
    }
    return sum;
}

int nProduct(int num){
    int product=1;
    for(int i=1; i<=num; i++){
        product*=i;
    }
    return product;
}

int main(){
    int N, C;
    cin>>N>>C;
    if(C==1){
        cout<<nSum(N);
    }
    else if(C==2){
        cout<<nProduct(N);
    }
    else{
        cout<<"-1";
    }
    return 0;
}