//Chapter 2 Exercise
//Problem 1
//chap1.cpp
//Converts gallons to cubic feet.
#include<iostream>
using namespace std;
int main()
	{
		float gallons, cufeet;
		cout << "Enter Quantity in Gallons: ";
		cin >> gallons;
		cout << endl;
		cufeet = gallons / 7.481;
		cout << "Equivalent in Cubic Feet is: " << cufeet;
		return 0;
	}