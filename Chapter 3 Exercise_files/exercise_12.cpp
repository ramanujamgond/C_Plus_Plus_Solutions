//Chapter 3 Solving Excercise Problem 12
//exercise_12.cpp
//Creating a four function calculator for fraction

#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	char option;
	cout <<"\nEnter the first fraction: ";
	cin >>a >>b;

	cout <<"\nEnter an operator(+, -, *, /): ";
	cin >>option;

	cout <<"\nEnter the second fraction: ";
	cin >>c >>d;

	switch(option) {
		case '+':
		cout <<"Addition: " <<a<<"/"<<b<<" + "<<c<<"/"<<d <<" = " <<((a*d+b*c)/(b*d)) <<endl;
		break;

		case '-':
		cout <<"Subtraction: "<<a<<"/"<<b<<" - "<<c<<"/"<<d <<" = " <<((a*d-b*c)/(b*d)) <<endl;
		break;

		case '*':
		cout <<"Multiplication: "<<a<<"/"<<b<<" * "<<c<<"/"<<d <<" = " <<((a*c)/(b*d)) <<endl;
		break;

		case '/':
		cout <<"Division: "<<a<<"/"<<b<<" / "<<c<<"/"<<d <<" = " <<((a*d)/(b*c)) <<endl;
		break;

		default:
		cout <<"Invalid Option!";
	}
	return 0;
}