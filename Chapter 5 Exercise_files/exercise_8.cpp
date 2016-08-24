//exercise_file8
//Exercise problem to swap two number in calling program.

#include<iostream>
using namespace std;

void swap(int&, int&);

int main() {
	int num1, num2;
	cout <<"\nEnter two number for swaping: ";
	cin >>num1 >>num2;
	cout <<"\nnum1 is: " <<num1 <<endl;
	cout <<"num2 is: " <<num2 <<endl;
	swap(num1, num2);
	cout <<"\n\nAfter swap num1 is " <<num1 <<endl;
	cout <<"After swap num2 is " <<num2 <<endl;

	return 0;
}

//swap()
void swap(int& a, int& b){
	int temp = a;
	a=b;
	b=temp;
}