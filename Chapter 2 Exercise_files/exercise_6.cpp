//Chapter 2 Exercise
//Problem 6
//ex1_6.cpp
//Program to display equivalent monetary system.
#include<iostream>
using namespace std;
int main()
	{
		double dollars, US = 1.487, franc = 0.172, deus_m = 0.584, yen = 0.00955;
		cout <<"Enter an amount in dollars:- $";
		cin >>dollars;
		cout <<"\nBritish Pound is equivalent to $"<<dollars*US <<endl;
		cout <<"\nFrench Franc is equivalent to $"<<dollars*franc <<endl;
		cout <<"\nGerman deutschemark is equivalent to $"<<dollars*deus_m <<endl;
		cout <<"\nJapanese yen is equivalent to $"<<dollars*yen <<endl;
		return 0; 
	}