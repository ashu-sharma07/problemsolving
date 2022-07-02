#include <iostream>
using namespace std;
int main(){
    int n, m, i, j;
    cin>>n;
    i=1;
    m = n/2+1;
    while(i<=n){
        j=1;
        if(i<=m){
        while (j<=m+i-1)
        {
            if (j<=m-i)
            {
                cout<<' ';
            }
            else{
                cout<<'*';
            }
            j++;
        }
        }
        else{
            j=1;
            while (j<=m+(i-m))
            {
                if (j<=i-m)
                {
                    cout<<' ';
                }
                else{
                    cout<<'*';
                }
                j++;
                
            }

        }

        cout<<endl;
        i++;
    }
    return 0;
}