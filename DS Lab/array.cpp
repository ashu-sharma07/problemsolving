#include <iostream>
#include <string>
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

void insertElement(int arr[], int n){
    int index, x;
    cout<<">>Enter the Index where you want to insert Element"<<endl;
    cin>>index;
    cout<<">>Enter the Element you want to insert at index "<<index<<endl;
    cin>>x;
    for(int i=n-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=x;
    cout<<"Inserted Element "<<x<<" Successfully on index "<<index<<endl<<endl;
}

void deleteElement(int arr[], int n){
    int index, x;
    cout<<">>Enter the Index where you want to Delete Element"<<endl;
    cin>>index;
    cout<<"Deleted Element "<<" Successfully on index "<<index<<endl<<endl;
}

int main(){
    int n;
    int arr[1000];
    string operation;
    bool keepRunning = true;
    cout<<"***Welcome to Array World***"<<endl<<endl;
    cout<<">>Enter the lenght of your Array"<<endl;
    cin>>n;
    cout<<">>Enter the "<<n<<" Elements of your Array"<<endl;
    inputElements(arr, n);
    while(keepRunning){
            cout<<">>Which operation do you want to perform with your Array ? "<<endl;
    cout<<">>Type : print, insert, exit"<<endl;
    cin>>operation;
    if(operation=="print"){
        printArray(arr, n);
    }
    else if(operation=="exit"){
        keepRunning=false;
    }
    else if(operation=="insert"){
        insertElement(arr, n);
        n++;
    }
    else if(operation=="delete"){
        deleteElement(arr, n);
        n--;
    }
    else{
        cout<<"Invaild !! Please enter a valid operation"<<endl<<endl;
    }
    }

    return 0;
}