//Chapter 2 Exercise 
//Problem 10
//ex1_10.cpp
//program for the conversion of monetary system.
#include<iostream>
using namespace std;
int main()
	{
		cout <<'\n';
		float pounds, shillings, pence;
		cout <<"Enter Pounds: ";
		cin >>pounds;
		cout <<endl;
		cout <<"Enter Shillings: ";
		cin >> shillings;
		cout <<endl;
		cout <<"Enter Pence: ";
		cin >>pence;
		cout <<endl;
		float dec_pounds = pounds + (shillings + pence/12)/20;
		cout <<"Decimal Pounds: \x9c" <<dec_pounds <<endl;
		return 0;
	}