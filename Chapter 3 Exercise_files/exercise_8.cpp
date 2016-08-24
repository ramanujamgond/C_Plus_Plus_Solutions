//Chapter 3 Solving Exercise problem 8
//exercise_8.cpp
//Adding old style british currency

#include<iostream>
using namespace std;
int main()
{
	int res_pound, res_shilling, res_pence, pound1, pound2, shilling1, shilling2, pence1, pence2;
	char ch;

	do{
		cout <<"\nEnter first amount: ";
		cin >>pound1 >>shilling1>> pence1;

		cout <<"\nEnter second amount: ";
		cin >>pound2 >>shilling2 >> pence2;

		res_pound = pound1 + pound2;
		res_shilling = shilling1 + shilling2;
		res_pence = pence1 + pence2;

		if(res_pence > 11)
		{
			res_shilling++;
			res_pence = 0;
		}
		if(res_shilling > 19)
		{
			res_pound++;
		}
		cout <<"\nTotal is " <<res_pound <<"." <<res_shilling <<"." <<res_pence;

		cout <<"\nDo you wish to continue (y/n): ";
		cin >>ch;
	} while(ch != 'n');

	return 0;
}