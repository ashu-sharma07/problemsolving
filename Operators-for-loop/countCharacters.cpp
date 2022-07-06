#include <iostream>
using namespace std;
int main(){
    char c = cin.get();
    int countAlpha = 0;
    int countNum = 0;
    int countSpace = 0;
    while (c!='$')
    {
        if (c>='a' && c<='z')
        {   
            //cout<<"Aphapet"<<endl;
            countAlpha++;
        }
        if (c>='0' && c<='9'){
            //cout<<"Number"<<endl;
            countNum++;
        }
        if (c==' '||c=='\n'||c=='\t'){
            //cout<<"WhiteSpace"<<endl;
            countSpace++;
        }
        
        c = cin.get();
    }
    cout<<countAlpha<<' '<<countNum<<' '<<countSpace<<endl;
    
    return 0;
}