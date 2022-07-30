#include <iostream>
using namespace std;
int main(){
    int i = 69;
    cout<<"value of variable i is "<<i<<endl;
    cout<<"Address of variable i in memory "<<&i<<endl;
    int *p = &i;
    cout << p << endl;
    bool m = 0;
    bool *pm = &m;
    cout<<*pm<<endl;
    return 0;
}