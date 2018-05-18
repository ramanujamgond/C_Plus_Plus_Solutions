//Chapter 2 Exercise
//Problem 7
//ex1_7.cpp
//Program to convert degree celsius to degree Fahrenheit.
#include<iostream>
using namespace std;
int main()
	{
		float celsius;
		cout <<"Enter the temperature in degree celsius: ";
		cin >>celsius;
		float fahren = (celsius * 9/5)+32;
		cout <<"\nEquivalent in Fahrenheit is: "<<fahren;
		return 0;
	}