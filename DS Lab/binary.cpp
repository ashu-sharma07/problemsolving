#include <iostream>
using namespace std;

int binarySearch(int input[], int n, int val)
{
    int start = 0;
    int end = n-1;
    int mid;
    while(start<=end){
     mid = (start+end)/2;
     if (input[mid]==val){
         return mid;
     }
     else if (val<input[mid]){
         end = mid - 1;
     }
     else{
         start = mid + 1;
     }
    }
    return -1;
}


int main(){
    int arr[1000] = {12,44,55,19,3};
    int x;
    cin>>x;
    cout<<binarySearch(arr, 5, x);
    return 0;
}