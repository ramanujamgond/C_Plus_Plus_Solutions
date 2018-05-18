//Chapter 2 Exercise
//Problem 3
//ex1_3.cpp
//Program to generates following output.
#include<iostream>
using namespace std;
int main()
	{
		int num = 10;
		cout <<'\n' <<num <<endl;
		num += 10;
		cout <<num <<endl;
		--num;
		cout <<num <<endl;
		cout <<"\nOR" <<endl;
		num = 10;
		cout <<'\n' <<num <<endl;
		num *= 2;
		cout <<num-- <<endl;
		cout <<num <<endl;
		return 0;
	}