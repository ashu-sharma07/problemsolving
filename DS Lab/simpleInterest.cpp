#include <iostream>
using namespace std;
int simple(int r, int p=100,  int t=1)
{
float si = p*r*t*0.01;
cout << si << endl;
return si;
}


int main(){
    cout<<simple(3);
    return 0;
}


//    *
//   **
//  ***
// ****