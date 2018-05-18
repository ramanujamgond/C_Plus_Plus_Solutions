//Structure used to represent four function fraction calculator
//four_funcalc.cpp

#include<iostream>
using namespace std;
////////////////////////////////////////////
struct fraction {
	int numerator;
	int denominator;
	char dummychar;
};
////////////////////////////////////////////
int main() {
	fraction frac1, frac2, frac3;
	char opr;
	cout <<"Enter first fraction: ";
	cin >>frac1.numerator >>frac1.dummychar >>frac1.denominator;

	cout <<"Enter second fraction: ";
	cin >>frac2.numerator >>frac2.dummychar >>frac2.denominator;
	cout <<"Enter slect an operator(+,-,*,/) for performing suitable operations: ";
	cin >>opr;
	
	switch(opr) {
		case '+':
		frac3.numerator = frac1.numerator*frac2.denominator + frac1.denominator*frac2.numerator;
		frac3.denominator = frac1.denominator*frac2.denominator;
		cout <<frac3.numerator <<"/" <<frac3.denominator;
		break;

		case '-':
		frac3.numerator = frac1.numerator*frac2.denominator - frac1.denominator*frac2.numerator;
		frac3.denominator = frac1.denominator*frac2.denominator;
		cout <<frac3.numerator <<"/" <<frac3.denominator;
		break;

		case '*':
		frac3.numerator = frac1.numerator*frac2.numerator;
		frac3.denominator = frac1.denominator*frac2.denominator;
		cout <<frac3.numerator <<"/" <<frac3.denominator;
		break;

		case '/':
		frac3.numerator = frac1.numerator*frac2.denominator;
		frac3.denominator = frac1.denominator*frac2.numerator;
		cout <<frac3.numerator <<"/" <<frac3.denominator;
		break;

		default:
		cout <<"Invalid Selection!";
	}

	return 0;
}