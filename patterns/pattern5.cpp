#include <iostream>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    i = n;
    
    while(i--){
        j = n;
         while(j--){
            cout << '*';
         }
         cout<<endl;
    }
    return 0;
}
