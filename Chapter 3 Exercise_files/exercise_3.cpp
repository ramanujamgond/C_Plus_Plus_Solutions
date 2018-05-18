#include<iostream>
#include<conio.h>
using namespace std;
int main()
	{
		char ch;
		long total=0;
		cout <<"Enter a number: ";
		for(int i=1; i<=6; i++)
		{
			ch=getche();
			total=(total*10)+ch-'0';
		}
		cout <<"\nNumber is "<<total;
		return 0;
	}