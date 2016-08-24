//exercise_file9
//Exercise problem to swap time structure.

#include<iostream>
using namespace std;

struct time {
	int hours;
	int minutes;
	int seconds;
};

void swapTime(time&, time&);
void swapTimeDisp(time);

int main() {
	time t1, t2;
	cout <<"\nEnter 1st time hours: "; cin >>t1.hours;
	cout <<"Enter 1st time minutes: "; cin >>t1.minutes;
	cout <<"Enter 1st time seconds: "; cin >>t1.seconds;

	cout <<"\n\nEnter 2nd time hours: "; cin >>t2.hours;
	cout <<"Enter 2nd time minutes: "; cin >>t2.minutes;
	cout <<"Enter 2nd time seconds: "; cin >>t2.seconds;

	cout <<"\n\nBefore swap 1st time is: "; swapTimeDisp(t1);
	cout <<"Before swap 2st time is: "; swapTimeDisp(t2);

	swapTime(t1, t2);

	cout <<"\n\nAfter swap 1st time is: "; swapTimeDisp(t1);
	cout <<"After swap 2nd time is: "; swapTimeDisp(t2);

	return 0;
}

//swapTime()
void swapTime(time& tm1, time& tm2) {
	time temp;
	temp.hours = tm1.hours;
	temp.minutes = tm1.minutes;
	temp.seconds = tm1.seconds;

	tm1.hours = tm2.hours;
	tm1.minutes = tm2.minutes;
	tm1.seconds = tm2.seconds;

	tm2.hours = temp.hours;
	tm2.minutes = temp.minutes;
	tm2.seconds = temp.seconds;
}

//swapTimeDisp()
void swapTimeDisp(time tme) {
	cout <<tme.hours <<":" <<tme.minutes <<":" <<tme.seconds <<endl;
}