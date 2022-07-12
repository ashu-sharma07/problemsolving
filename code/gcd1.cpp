// Finding gcd using Algo 

#include <iostream>
using namespace std;
int main(){
	int a, b, r;
	cin >> a >> b;
	while(a%b!=0){
	r = a%b;
        a = b;
        b = r;	
	}
	cout << b << endl;
	return 0;

}

