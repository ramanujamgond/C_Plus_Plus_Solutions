//Chapter 3 Solving Exercise Problem 7
//exercise_7.cpp
//Calculate compund amount anually at fix interest rate

#include<iostream>
using namespace std;
int main()
{
	int year;
	float amount, interest_rate, compund_amount;

	cout <<"\nEnter initial amount: ";
	cin >>amount;
	cout <<"\nEnter number of years: ";
	cin >>year;
	cout <<"\nEnter interest rate (percent per year): ";
	cin >>interest_rate;

	for(int i=1; i<=year; i++)
	{
		compund_amount = amount+(amount * (5.5/100));
		amount = compund_amount;
	}
	cout <<"\nAt the end of "<<year <<" years, you will have "<<compund_amount <<" dollars." <<endl;
	return 0;
}