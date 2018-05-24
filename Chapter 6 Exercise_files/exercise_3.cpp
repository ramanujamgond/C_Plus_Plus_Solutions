//exercise_file3
//Add two initialized time objects using class and object concepts.

#include <iostream>
using namespace std;

class times {
	public:
		int hours;
		int minutes;
		int seconds;
	public:
		times():hours(0), minutes(0), seconds(0) //no-argument constructor
			{	}
		times(int hrs, int min, int sec):hours(hrs), minutes(min), seconds(sec) //3-argument constructor
			{	}
		void dispTime() const { //display time in hh:mm:ss format
			cout <<hours <<":" <<minutes <<":" <<seconds;
		}
		void addTime(times, times); //add times arguments #declaration
};

void times::addTime(times t1, times t2) { //add times arguments #defination
	seconds = t1.seconds + t2.seconds;
	if(seconds > 59) {
		seconds -= 60;
		minutes++;
	}

	minutes += t1.minutes + t2. minutes;
	if(minutes > 59) {
		minutes -= 60;
		hours++;
	}
	hours += t1.hours + t2.hours;
}

int main() {
	const times t1(10, 30, 43); //create and initialize times objects
	const times t2(2, 26, 53); //create and initialize times objects
	times t3; //create times object
	t3.addTime(t1, t2); //calling addTime to add two times object
	cout <<"Total time in t3 is: ";
	t3.dispTime(); //calling dispTime to display time
	cout <<endl;
	return 0;
}