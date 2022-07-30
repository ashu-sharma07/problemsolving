#include <iostream>
using namespace std;
#include "student.cpp"

int main(){
	Student s1;
	Student s2;
	Student *s3 = new Student;
	s1.age = 24;
	s1.rollNumber = 101;
	cout<<s1.age<<endl;
	cout<<s1.rollNumber<<endl;
	s1.display();
	s2.display();
	
	
	
	return 0;
}

