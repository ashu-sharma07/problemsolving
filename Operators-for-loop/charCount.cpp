#include <iostream>
using namespace std;
int main(){
    char chr;
    cin>>chr;
    while(chr!='$'){
    if((chr>='a')&&(chr<='z')){
        cout<<"Alpha"<<endl;
    }
    cin>>chr;
    }

    return 0;
}