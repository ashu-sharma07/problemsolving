#include <iostream>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    while(i<=n){
        j = 1;
        while(j<=n+i-1){
            if(j<=n-i){
                cout << " ";
            }
            else{
                cout << '*';
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}