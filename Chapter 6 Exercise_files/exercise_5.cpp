//exercise_file5
//Program to create a date class and assign its member data using class and object concept

#include <iostream>
using namespace std;

class dates {
	private:	//member datas
		int month;
		int day;
		int year;
	public:	//member functions
		void getDate();	//function to set date #declaration

		void showDate(); //function to show date #declaration
};

void dates::getDate() {	//function set date #defination
	cout <<"Enter date in mm/dd/yy format: ";
	cin >>month >>day >>year;
}

void dates::showDate() {	//function show date #defination
	cout <<"Date: " <<month <<"/" <<day <<"/" <<year;
}

int main() {
	dates dt;	//class object declared
	dt.getDate();	//call getDate() member function
	dt.showDate();	//call showDate() member function
	cout <<endl;
	return 0;
}