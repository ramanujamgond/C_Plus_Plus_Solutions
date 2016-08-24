//Chapter 2 Excercise
//Problem 8
//ex1_8.cpp
//program to rewrite the witdh program using setfill manipulators.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
	{
		long pop1 = 2425785, pop2 = 47, pop3 = 9761;
		cout <<setfill('.') <<setw(8) <<"LOCATION" <<setw(20) <<"POPULATION" <<endl
			 <<setw(8) <<"portcity" <<setw(20) <<pop1 <<endl
			 <<setw(8) <<"Hightown" <<setw(20) <<pop2 <<endl
			 <<setw(8) <<"Hightown" <<setw(20) <<pop3 <<endl;
		return 0;
	}