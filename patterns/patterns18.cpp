#include <iostream>
using namespace std;
int main(){
    int n, i, j, s, e;
    cin>>n;
    i=1;
    while(i<=n){
        s=1;
        j=1;
        e=i-1;
        while(s<=n-i){
            cout<<' ';
            s++;
        }
        while (j<=i)
        { 
          char chr = 65+j-1;
          cout<<'*';
          j++;
        }
        while(e>0){
            char chr = 65+e-1;
            cout<<'#';
            e--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}