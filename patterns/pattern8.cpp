#include <iostream>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    i = 1;
    while(i<=n){
        j = n;
        while(j>0){
            cout <<j;
            j--; 
        }
        cout<<endl;
        i++;
    }
    return 0;
}