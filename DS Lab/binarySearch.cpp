#include<iostream>
using namespace std;
// int binarysearch(int arr[],int size,int key){
// 	int start=0;
// 	int end=size-1;
// 	while(start<=end){
//         int mid=(start+end)/2;
// 		if(arr[mid]==key){
// 			return mid;
// 		}
		
// 		else if(key<arr[mid]){
// 		 end=mid-1;
// 		}
		
// 		else{
// 			start=mid+1;
// 		}
// 	}
// 	return -1;
// }
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
// int odd[10]={23,78,90,57,45};
// int evenIndex=binarySearch(odd,5,57);
//   cout<<"Index of mid is  "<< binarySearch(odd,5,57)<<endl;
int arr[100] = {23, 78, 90, 57, 45};
cout<<binarySearch(arr, 5, 45)<<endl;
return 0;
}