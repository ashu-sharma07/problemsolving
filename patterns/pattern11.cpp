#include <iostream>
using namespace std;
int main(){
    int n, i, j, p;
    cin >> n;
    i = 1;
    
    while(i<=n){
        j = 1;
        p = i;
        while(j<=i){
            cout<<p;
            j++;
            p++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}