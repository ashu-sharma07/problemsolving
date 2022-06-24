#include <iostream>
using namespace std;
int main(){
    int n, i, j;
    char chr;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            chr='A'+j-1;
            cout<<chr;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}