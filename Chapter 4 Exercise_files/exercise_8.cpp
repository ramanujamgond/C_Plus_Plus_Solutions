//Structure used for addition of fractions
//fraction.cpp

#include<iostream>
using namespace std;
///////////////////////////////////////////
struct fraction {
	int numerator;
	int denominator;
	char dummychar;
};
///////////////////////////////////////////
int main() {
	fraction f1, f2, f3;
	cout <<"Enter first fraction: ";
	cin >>f1.numerator >>f1.dummychar >>f1.denominator;

	cout <<"Enter second fraction: ";
	cin >>f2.numerator >>f2.dummychar >>f2.denominator;

	f3.numerator = f1.numerator*f2.denominator + f1.denominator*f2.numerator;
	f3.denominator = f1.denominator*f2.denominator;

	cout <<"Addition of two fraction is: " <<f3.numerator <<"/" <<f3.denominator <<endl;

	return 0;
}