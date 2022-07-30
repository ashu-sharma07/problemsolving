#include <iostream>
using namespace std;
int main(){
    int i = 69;
    int *p = &i;
    cout<<"Value of i via direct variable i "<<i<<endl;
    cout<<"Value of i via pointer p using d reference "<<*p<<endl;
    i++;
    cout<<"Value of i via direct variable i "<<i<<endl;
    cout<<"Value of i via pointer p using d reference "<<*p<<endl;   
    int a = *p;
    cout<<++a<<endl;
    cout<<i<<endl;
    int *q = p;
    (*q)++;
    cout<<i<<endl;
    return 0;
}