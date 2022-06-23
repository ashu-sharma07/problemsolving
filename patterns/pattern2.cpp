#include <iostream>
using namespace std;
int main()
{
    int n, i, j, p;
    cin >> n;
    i = 1;
    p = 1;
    while (i <= n)
    {
        j = 1;
        while(j<=n){
            if(j<=n-i){
                cout << " ";
            }
            else{
                cout << p;
                p++;
            }
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
