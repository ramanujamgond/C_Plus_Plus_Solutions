//Enumerations used for the interpretation of user inputed values
//employee_type.cpp

#include<iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////
enum etype {laborer, secretary, manager, accountant, executive, researcher};
////////////////////////////////////////////////////////////////////////////////
int main() {
	etype emp;
	char select_type;
	cout <<"\nEnter employee type (first letter only: laborer, secretary, manager, accountant, executive, researcher): ";
	cin >>select_type;

	switch(select_type) {
		case 'l':	emp = laborer;	
		break;

		case 's':	emp = secretary;	
		break;

		case 'm':	emp = manager;
		break;

		case 'a':	emp = accountant;
		break;

		case 'e':	emp = executive;
		break;

		case 'r':	emp = researcher;
		break;

		default: cout <<"Invalid Selection!\n";
	}

	switch(emp) {
		case laborer:
		cout <<"Employee type is laborer\n";
		break;

		case secretary:
		cout <<"Employee type is secretary\n";
		break;

		case manager:
		cout <<"Employee type is manager\n";
		break;

		case accountant:
		cout <<"Employee type is accountant\n";
		break;

		case executive:
		cout <<"Employee type is executive\n";
		break;

		case researcher:
		cout <<"Employee type is researcher\n";
		break;

		default: 
		cout <<"No match found!\n";
	}

	return 0;
} 