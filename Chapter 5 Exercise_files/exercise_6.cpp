//exercise_file5
//Exercise problem to take time structure as input and return the values in seconds and vice versa.

#include<iostream>
using namespace std;

struct time {
	int hours;
	int minutes;
	int seconds;
};

long time_to_secs(time);
time secs_to_time(long);
void disp_time(time);

int main() {
	time t1, str_time;
	long time;
	cout <<"\nEnter hours: ";
	cin >>t1.hours;
	cout <<"Enter minutes: ";
	cin >>t1.minutes;
	cout <<"Enter seconds: ";
	cin >>t1.seconds;

	cout <<"Total time structure in seconds is: " <<time_to_secs(t1);
	
	cout <<"\n\nEnter total time in seconds: ";
	cin >>time;
	str_time = secs_to_time(time);
	cout <<"Total seconds in time structure is: "; disp_time(str_time); 

	return 0;
}

//time_to_secs()
long time_to_secs(time tt1) {
	return tt1.hours*3600 + tt1.minutes*60 + tt1.seconds;
}

//secs_to_time()
time secs_to_time(long tt2) {
	int hh, mm, ss;
	time tme;
	mm = tt2/60;
	ss = tt2%60;
	hh = mm/60;
	mm = mm%60;

	tme.hours = hh;
	tme.minutes = mm;
	tme.seconds = ss;

	return tme;
}

//disp_time()
void disp_time(time tms){
	cout <<tms.hours <<":" <<tms.minutes <<":" <<tms.seconds <<endl;
}