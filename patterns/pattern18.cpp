#include <iostream>
using namespace std;
int main()
{
    int n, i, j, p, k;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        p=i;
        k=2*(i-1);
        while (j <= n + i - 1)
        {
            if (j <= n - i)
            {
                cout << ' ';
            }
            else
            {
                if (j <= n)
                {
                    cout << p;
                    p++;
                }
                else
                {
                    cout << k;
                    k--;
                }
            }
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}