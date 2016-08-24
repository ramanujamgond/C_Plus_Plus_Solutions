//exercise_file3
//Exercise problem to set the smaller number to zero.

#include<iostream>
using namespace std;

void zeroSmaller(int&, int&);

int main() {
	int num1, num2;
	cout <<"\nEnter two integer number: ";
	cin >> num1 >>num2;
	zeroSmaller(num1, num2);
	cout <<"Number 1 is: " <<num1 <<endl;
	cout <<"Number 2 is: " <<num2 <<endl;
	return 0;
}

//zeroSmaller()
void zeroSmaller(int& a, int& b) {
	if(a>b)
		b=0;
	else
		a=0;
}