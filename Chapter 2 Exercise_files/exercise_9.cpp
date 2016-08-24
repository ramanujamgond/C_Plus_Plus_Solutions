//Chapter 2 Exercise
//Problem 9
//ex1_9.cpp
//Program to enter fraction and displkay its sum
#include<iostream>
using namespace std;
int main()
	{
		int a,b,c,d, sum1, sum2;
		cout <<"Enter first fraction for addition: ";
		cin >>a>>b;
		cout <<"Enter second fraction for addition: ";
		cin >>c>>d;
		sum1 = (a*d)+(b*c);
		sum2 = b*d;
		cout <<"Sum of two fraction is: "<<sum1 <<"/" <<sum2 <<endl;
		return 0;
	}