//Chapter 2 Exercise
//Problem 5
//ex1_5.cpp
//program to demonstrate islower() library function
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
	{
		char charvar;
		int var;
		cout <<"Enter a character from keyboard: ";
		cin >>charvar;
		var = islower(charvar);
		cout <<var <<endl;
		return 0;
	}