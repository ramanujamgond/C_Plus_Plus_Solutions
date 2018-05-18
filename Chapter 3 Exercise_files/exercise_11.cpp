//Chapter 3 Solving Exercise Problem 11
//exercise_11.cpp
//Create the three functon calculator for old style english currency

#include<iostream>
using namespace std;
int main()
{
	float pound1, pound2, shilling1, shilling2, pence1, pence2;
	char option;
	cout <<"\nEnter first amount in old style english currency: \x9C";
	cin >>pound1 >>shilling1 >>pence1;

	cout <<"\nEnter second amount in old style english currency: \x9C";
	cin >>pound2 >>shilling2 >>pence2;

	cout <<"\nPress '+' for addition, press '-' for subtraction & press '*' for multiplication: ";
	cin >>option;

	switch(option) {
		case '+':
		cout <<"Addition of two old style english currency is: \x9C" <<pound1+pound2 <<"." <<shilling1+shilling2 <<"." <<pence1+pence2 <<endl;
		break;

		case '-':
		cout <<"subtraction of two old style english currency is: \x9C" <<pound1-pound2 <<"." <<shilling1-shilling2 <<"." <<pence1-pence2 <<endl;
		break;

		case '*':
		cout <<"Multiplication of two old style englsih currency is: \x9C" <<pound1*pound2 <<"." <<shilling1*shilling2 <<"." <<pence1*pence2 <<endl;
		break;

		default:
		cout <<"Invalid Option!";

	}
	return 0;
}