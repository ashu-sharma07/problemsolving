#include <iostream>
using namespace std;
int main(){
    int n, i, j, p;
    cin>>n;
    i=1;
    while (i<=n)
    {
        j=1;
        p=i-1;
        while (j<=n+i-1)
        {   
            if (j<=n-i)
            {
                cout<<' ';
            }
            else if (j<=n){
                cout<<j-(n-i);
            }
            else{
                cout<<p;
                p--;
            }
            j++;
        }
        
        cout<<endl;
        i++;
    }
    
    return 0;
}