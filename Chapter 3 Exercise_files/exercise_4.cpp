#include<iostream>
using namespace std;
int main()
	{
		float num1,num2;
		char opr, ch;
		
		do {
			cout <<"\nEnter first number, operator, second number: ";
			cin >>num1 >>opr >>num2;
			
			switch(opr)
			{
				case '+':
				cout <<"\nAnswer = " <<num1+num2;
				break;
				
				case '-':
				cout <<"\nAnswer = " <<num1-num2;
				break;
				
				case '*':
				cout <<"\nAnswer = " <<num1*num2;
				break;
				
				case '/':
				cout <<"\nAnswer = " <<num1/num2;
				break;
				
				default:
				cout <<"\nInvalid Input! ";
			}
			cout <<"\n\nDo You Want Another, Press(y/n): ";
			cin >>ch;
		}while(ch != 'n');
		return 0;
	}