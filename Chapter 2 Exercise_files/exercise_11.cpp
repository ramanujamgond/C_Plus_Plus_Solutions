//Chapter 2 Exercise
//Problem 11
//ex1_11.cpp
//Program to use setiosflags(ios::left) manipulator.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
	{
		cout <<setiosflags(ios::left) <<setw(17) <<"\nLast Name" <<setw(16) <<"First Name" 
			 <<setw(22) <<"Street Address" <<setw(15) <<"Town" 
			 <<setw(9) <<"State" <<endl;
		cout <<"----------------------------------------------------------------------------" <<endl;
		cout <<setiosflags(ios::left) <<setw(17) <<"Jones" <<setw(16) <<"Bernard" 
			 <<setw(22) <<"109 Pine Lane" <<setw(15) <<"Littletown" <<setw(9) <<"MI"
			 <<endl;
		cout <<setiosflags(ios::left) <<setw(17) <<"O'Brian" <<setw(16) <<"Coleen"
			 <<setw(22) <<"42 E. 99th Ave." <<setw(15) <<"Bigcity" <<setw(9) <<"NY"
			 <<endl;
		cout <<setiosflags(ios::left) <<setw(17) <<"Wong" <<setw(16) <<"Harry" 
			 <<setw(22) <<"121-A Alabama St." <<setw(15) <<"Lakeville" <<setw(9) <<"IL"
			 <<endl;
		return 0;	 
	}