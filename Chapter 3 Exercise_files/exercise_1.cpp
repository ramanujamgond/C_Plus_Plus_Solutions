#include<iostream>
using namespace std;
#include<iomanip>
int main()
	{
		int num, i, j, k=1;
		
		cout <<"Enter a Number For Multiplication: ";
		cin >>num;
		for(i=1; i<=20; i++)
		{
			for(j=1; j<=10; j++)
			{
				cout <<setw(6) <<num*k++ <"  ";
			}
			cout <<endl;
		}
		return 0;
	}