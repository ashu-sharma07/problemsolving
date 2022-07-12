#include <iostream>
using namespace std;

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int binarySearch(int arr[], int n, int x)
{
    int l = 0;
    int u = n - 1;
    while (l <= u)
    {
        int m = (l + u) / 2;
        if (arr[m] == x)
        {
            return m;
        }
        else if (arr[m] < x)
        {
            l = m + 1;
        }
        else
        {
            u = m - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[1000];
    int n, x;
    cin >> n >> x;
    inputArray(arr, n);
    cout << binarySearch(arr, n, x) << endl;
    return 0;
}

// {23,78,90,57,45}