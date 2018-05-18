//exercise_file2
//Exercise problem to find the power of a number.

#include<iostream>
using namespace std;

double power(double, int=2);

int main() {
	double num, answer;
	int pow;
	char ch;
	cout <<"\nEnter a number: ";
	cin >>num;
	cout <<"Want to enter the power Y/N: ";
	cin >>ch;
	if(ch == 'y' || ch == 'Y') {
		cout <<"Enter the power: ";
		cin >>pow;
		answer = power(num, pow);
	} else {
		answer = power(num);
	}
	cout <<"The value of power is: " <<answer <<endl;
	return 0;
}

//power()
double power(double n, int power) {
	double ans = 1.0;
	for(int i=1; i<=power; i++) {
		ans *= n;
	} 
	return ans;
}