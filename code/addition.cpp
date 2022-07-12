#include <iostream>
using namespace std;

int add1(int n1, int n2){
return n1+n2;
}

int add2(){
int n1, n2;
cin >> n1 >> n2;
return n1+n2;

}





int main(){
int s1, s2;
cin >> s1 >> s2;
cout <<add1(s1, s2)<<endl;
cout<<add2()<<endl;
return 0;
}
