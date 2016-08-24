//Structure used to add two time values inputed by user in hh:mm:ss format.
//add_time.cpp

#include<iostream>
using namespace std;
/////////////////////////////////////////////////////
struct time {
	int hours;
	int minutes;
	int seconds;
	char dumychar;
};
/////////////////////////////////////////////////////
int main() {
	time t1, t2, t3;
	float total_time, temp_hours, frac_hours, temp_minutes, frac_minutes;
	cout <<"Enter the first time value in hh:mm:ss format: ";
	cin >>t1.hours >>t1.dumychar >>t1.minutes >>t1.dumychar >>t1.seconds;
	
	cout <<"Enter the second time value in hh:mm:ss format: ";
	cin >>t2.hours >>t2.dumychar >>t2.minutes >>t2.dumychar >>t2.seconds;
	
	t1.hours *= 3600; t1.minutes *= 60;
	t2.hours *= 3600; t2.minutes *= 60;
	
	total_time = t1.hours + t1.minutes + t1.seconds + t2.hours + t2.minutes +t2.seconds;

	temp_hours = total_time/3600;
	t3.hours = temp_hours;
	frac_hours = temp_hours - t3.hours;
	
	temp_minutes = frac_hours*60;
	t3.minutes = temp_minutes;
	frac_minutes = temp_minutes - t3.minutes;
	cout <<frac_minutes <<endl;

	t3.seconds = frac_minutes*60;

	cout <<"\nTotal time in hh:mm:ss format is: " <<t3.hours <<":" <<t3.minutes <<":" <<t3.seconds <<endl;
	return 0;
}