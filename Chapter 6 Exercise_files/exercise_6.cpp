//exercise_file6
//Program to create a employee class 

#include <iostream>
using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};	//specification of enumerators

class dates {	//dates class defination
	private:
		int day;
		int month;
		int year;
	public:
		void putDate();	//set date #declaration
		void showDate(); //show date #declaration
};

void dates::putDate() {	//set date #defination
	char ch;
	cout <<"Enter employee date of joining in dd/mm/yyyy format: ";
	cin >>day >>ch >>month >>ch >>year;
}

void dates::showDate() {	//set date #defination
	cout <<"\nEmployee date of joining: "<<day <<"/" <<month <<"/" <<year;
}

class employee {	//employee class defination
	private:
		int employeeNumber;
		float employeeCompensation;
		dates dt;
		etype emp;
	public:
		void putemploy();	//set employee details #declaration
		void getemploy();	//display employee details #declaration
};

void employee::putemploy() {	//set employee details #defination
	char selectempType;
	cout <<"Enter employee number: ";
	cin >>employeeNumber;
	cout <<"Enter employee Compensation: ";
	cin >>employeeCompensation;
	dt.putDate();
	cout <<"Enter employee type (first letter only: laborer, secretary, manager, accountant, executive, researcher): ";
	cin >>selectempType;

	switch(selectempType) {
		case 'l':
		emp = laborer;
		break;

		case 's':
		emp = secretary;
		break;

		case 'm':
		emp = manager;
		break;

		case 'a':
		emp = accountant;
		break;

		case 'e':
		emp = executive;
		break;

		case 'r':
		emp = researcher;
		break;

		default:
		cout <<"Invalid Input!";
	}
}

void employee::getemploy() {	//show employee details #defination
	cout <<"\nEmployee Number: " <<employeeNumber;
	cout <<"\nEmployee Compensation $" <<employeeCompensation;
	dt.showDate();
	cout <<"\nEmployee type is: ";
	switch(emp) {
		case laborer:
		cout <<"Laborer";
		break;

		case secretary:
		cout <<"Secretary";
		break;

		case manager:
		cout <<"Manager";
		break;

		case accountant:
		cout <<"Accountant";
		break;

		case executive:
		cout <<"Executive";
		break;

		case researcher:
		cout <<"Researcher";
		break;
	}
}

int main() {
	employee emp1, emp2, emp3;	//employee type objects declared
	cout <<"\nEnter first employee details: \n";
	emp1.putemploy();	//set employee details
	cout <<"\nEnter second employee details: \n";
	emp2.putemploy();	//set employee details
	cout <<"\nEnter third employee details: \n";
	emp3.putemploy();	//set employee details
	cout <<"\nFirst employee deatils: ";
	emp1.getemploy();
	cout <<endl;	//show employee details
	cout <<"\nSecond employee deatils: ";
	emp2.getemploy();
	cout <<endl;	//show employee details
	cout <<"\nThird employee deatils: ";
	emp3.getemploy();	//show employee details
	cout <<endl <<endl;
	return 0;
}