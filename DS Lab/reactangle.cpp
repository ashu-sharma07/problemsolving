// Write a program to calculate factorial of a number by creating function with return 
// Write a program with default args to calculate simple interest rate of interest and time 
// Write a program to demonstate copy constructor 


#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l=10, int b=10){
        length=l;
        breadth=b;

    }

    Rectangle(Rectangle& r){
        length=r.length;
        breadth=r.breadth;
    }
    
    int calculateArea(){
        return length*breadth;
    }
};

int main(){
    Rectangle r2;
    Rectangle r3(r2);
    cout<<r3.calculateArea()<<endl;
    return 0;
}


