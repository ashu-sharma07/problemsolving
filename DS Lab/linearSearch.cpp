#include <iostream>
using namespace std;
void printArray(int arr[], int n){
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl<<endl;
}

void inputElements(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Elemets inserted Successfully "<<endl<<endl;
}


int linearSearch(int arr[], int n){
    cout<<"Enter the element you want to search "<<endl;
    int x;
    cin>>x;
    for(int i=0; i<n; i++){
        if(x==arr[i]){
            return i;
        }
    }
    return -1;
}



int main(){
    int arr[1000];
    int n;
    cin>>n;
    inputElements(arr, n);
    cout<<linearSearch(arr, n)<<endl;
    return 0;
}