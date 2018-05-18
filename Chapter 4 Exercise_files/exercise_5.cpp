//Structure to store user inputed date and display them
//dat.cpp

#include<iostream>
using namespace std;
////////////////////////////////////
struct dat {
	int day;
	int month;
	int year;
};
////////////////////////////////////
int main() {
	dat mdy;
	cout <<"Enter the date in mm/dd/yy format: ";
	cin >>mdy.month >>mdy.day >>mdy.year;

	cout <<"User inputed date is: " <<mdy.month <<"/" <<mdy.day <<"/" <<mdy.year;
	return 0;
}