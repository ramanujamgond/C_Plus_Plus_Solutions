//exercise_4.cpp
//Program to create an employee class and alows the user to set data for three employees.

#include <iostream>
using namespace std;

class employee {
	private:
		int employeeNumber;
		float employeeCompensation;
	public:
		employee(): employeeNumber(0), employeeCompensation(0)	//no-argument constructor
			{	}
		employee(int empNum, float empCom): employeeNumber(empNum), employeeCompensation(empCom)	//two argumnet constructor
			{	}
		void setData();	//function to set member data value #declaration

		void dispData() const;	//function to display member data value #declaration
};

void employee::setData() {	//function to set member data #defination
	cout <<"\nEnter employee Number: ";
	cin >>employeeNumber;
	cout <<"Enter employee Compensation: ";
	cin >>employeeCompensation;
	cout <<endl;
}

void employee::dispData() const {	//function to display member data #defination
	cout <<"Employee Number: " <<employeeNumber <<endl;
	cout <<"Employee Compensation: $" <<employeeCompensation <<endl;
}

int main() {
	employee emp1, emp2;	//declared class object
	employee emp3(12, 34.6);	//declared class object and initialize
	emp1.setData();	//call member function to set member data
	emp2.setData();	//call member function to set member data
	cout <<"\nDetails of first employee: ";
	emp1.dispData();	//call member function to display member data values
	cout <<"\nDetails of second employee: ";
	emp2.dispData();	//call member function to display member data values
	cout <<"\nDetails of third employee: ";
	emp3.dispData();	//call member function to display member data values
	cout <<endl;
	return 0;
}