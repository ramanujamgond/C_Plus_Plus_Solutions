//Chapter 2 Exercise
//Problem 12
//ex1_12.cpp
//inverse of monetary system
#include<iostream>
using namespace std;
int main()
	{
		int pounds, pence;
		float decpounds, decfrac, decpence, decfracpence;
		cout <<"Enter decimal pounds: ";
		cin >>decpounds;
		pounds = static_cast<int>(decpounds);
		decfrac = decpounds - pounds;
		decfrac *= 20;
		decpence = decfrac;
		pence = static_cast<int>(decpence);
		decfracpence = decpence - pence;
		decfracpence *= 12;
		cout <<"Equivalent in old notation = \x9c" <<pounds <<"." 
			 <<static_cast<int>(decfrac) <<"." <<static_cast<int>(decfracpence)
			 <<endl;
		return 0;	 
	}