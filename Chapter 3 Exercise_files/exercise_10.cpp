//Chapter 3 Solving Exercise Problem 10
//exercise_10.cpp
//Program to calculate the number of years to get the final amount entered by user

#include<iostream>
using namespace std;
int main()
{
	float amount, prinicap_amount, rat_interest, temp;
	int year;
	cout <<"Enter the final amount you want to get in particular year: ";
	cin >>amount;
	cout <<"Enter the principal amount: ";
	cin >>prinicap_amount;
	cout <<"Enter the rate of interest: ";
	cin >>rat_interest;

	temp = prinicap_amount;

	while(temp<amount)
	{
		temp *= (1+(rat_interest/100));
		year++;
	}
	cout <<"It will take " <<year <<" years at " <<rat_interest <<" of interest to reach the final amount " <<amount <<endl;
	return 0;
}