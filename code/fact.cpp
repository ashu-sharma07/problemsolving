#include <iostream>
using namespace std;
int main(){

int fact(){
	int n, f;
	cin>>n;
	f=1;
	while(n>0){
	f*=n;
	n--;
	}
	return f;
}

cout<<fact();
return 0;
}
