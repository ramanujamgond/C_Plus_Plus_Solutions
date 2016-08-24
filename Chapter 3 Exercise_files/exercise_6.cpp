#include<iostream>
#include<conio.h>
using namespace std;
int main()
	{
		long num;
		while(num!=0)
		{
			int fact=1;
			cout <<"\nEnter A Number: ";
			cin >>num;
			for(int i=1; i<=num; i++)
			{
				fact*=i;
			}
			if(fact!=1)
			cout <<"Factorial of "<<num <<" is "<<fact;
		}
		return 0;
	}