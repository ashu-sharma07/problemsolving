#include <iostream>
using namespace std;
int main(){
    int n, i, j, p, space;
    cin >> n;
    i = 1;
    p = 1;
    while (i<=n)
    {  
        j = 1;
        space = 1;
        while (space<=n-i)
        {
            cout << " ";
            space++;
        }
        
        while (j<=i)
        {
            cout << p;
            p++;
            j++;
        }
        
       cout << endl;
       i++;
    }
     
    return 0;
}