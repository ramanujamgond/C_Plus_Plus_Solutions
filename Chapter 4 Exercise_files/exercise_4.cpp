//structure used to show employee details
//employee.cpp

#include<iostream>
using namespace std;
///////////////////////////////////////
struct employee {
	int emp_num;
	float emp_comp;
};
///////////////////////////////////////
int main() {
	employee emp1, emp2, emp3;
	cout <<"Enter the details of employee 1 :-->" <<endl;
	cout <<"\nEnter the employee number: ";
	cin >>emp1.emp_num;
	cout <<"Enter the employee compensation: $";
	cin >>emp1.emp_comp;

	cout <<"\nEnter the details of employee 2 :-->" <<endl;
	cout <<"Enter the employee number: ";
	cin >>emp2.emp_num;
	cout <<"Enter the employee compensation: $";
	cin >>emp2.emp_comp;

	cout <<"\nEnte the details of employee 3 :-->" <<endl;
	cout <<"Entewr the epmoyee number: ";
	cin >>emp3.emp_num;
	cout <<"Enter the epmoyee compensation: $";
	cin >>emp3.emp_comp;

	cout <<endl;

	cout <<"\nEmployee Details:--> " <<endl;
	cout <<"\nEmployee-1: employee number: " <<emp1.emp_num <<endl;
	cout <<"Employee-1: employee compensation: $" <<emp1.emp_comp <<endl;

	cout <<"\nEmployee-2: employee number: " <<emp2.emp_num <<endl;
	cout <<"Employee-2: employee compensation: $" <<emp2.emp_comp <<endl;

	cout <<"\nEmployee-3: employee number: " <<emp3.emp_num <<endl;
	cout <<"Employee-3: employee compensation: $" <<emp3.emp_comp <<endl;

	return 0;
}