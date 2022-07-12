#include <iostream>
using namespace std;
int main(){
    int n, i, j, p;
    char chr;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        p=i;
        while(j<=i){
            chr = 'A'+p-1;
            cout<<chr;
            j++;
            p++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}