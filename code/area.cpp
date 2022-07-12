#include <iostream>
using namespace std;

class Rectangle{
	private:
		int l, b;
	public:
	void setlb(){
	cout<<"Enter length and breath"<<endl;
	cin>>l>>b;
	}
	int findarea(){
		return l*b;
	}
};




int main(){
Rectangle r1;
r1.setlb();
cout<<r1.findarea()<<endl;
	return 0;
}

