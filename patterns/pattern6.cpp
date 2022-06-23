#include <iostream>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    i = 1;
    while(i<=n){
        j = n;
        while(j--){
            cout << i;
        }
        cout<<endl;
        i++;
    }
    return 0;
}