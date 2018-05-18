//structure used to calculate total seconds of time value in hours, minutes, seconds
//total_sec.cpp

#include<iostream>
using namespace std;
///////////////////////////////////////
struct time {
	int hours;
	int minutes;
	int seconds;
	char dummycolon;
};
///////////////////////////////////////
int main() {
	time t1;
	cout <<"Enter the time value (i.e hours, minutes, seconds): ";
	cin >>t1.hours >>t1.dummycolon >>t1.minutes >>t1.dummycolon >>t1.seconds;

	long totalsecs = t1.hours*3600 + t1.minutes*60 + t1.seconds;

	cout <<"Total number of seconds are: " <<totalsecs <<endl;

	return 0;
}