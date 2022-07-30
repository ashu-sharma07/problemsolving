#include <iostream>
using namespace std;
int main(){
    int n, s1, s2;
    cin>>n>>s1;
    bool isDec = false;
    bool isInc = false;
    for (int i=2; i<n; n++){
        cin>>s2;
        if (s1>s2){
            isDec = true;
        }else if(s1<s2){
            isInc = true;
        }else{
            cout<<"false"<<endl;
            break;
        }
    }
    if(!isDec && isInc){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}