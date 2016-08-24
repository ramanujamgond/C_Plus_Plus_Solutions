//exercise_file4
//Exercise problem to compare two distance sturcture to show the larger one.

#include<iostream>
using namespace std;

struct Distance {
	int feet;
	float inches;
};

Distance lrgDist(Distance, Distance);
void lrgdisp(Distance);

int main() {
	Distance d1, d2, d3;
	cout <<"\nEnter first distance in feet: ";
	cin >>d1.feet;
	cout <<"Enter first distance in inches: ";
	cin >>d1.inches;
	cout <<"\nEnter second distance in feet: ";
	cin >>d2.feet;
	cout <<"Enter second distance in inches: ";
	cin >>d2.inches;

	d3 = lrgDist(d1, d2);

	cout <<"\nd1: "; lrgdisp(d1);
	cout <<"d2: "; lrgdisp(d2);

	cout <<"\nThe largest distance is: ";
	lrgdisp(d3);
	return 0;
}

//lrgDist()
Distance lrgDist(Distance dd1, Distance dd2) {
	if(dd1.feet > dd2.feet) {
		return dd1;

	} else if(dd2.feet > dd1.feet) {
		return dd2;

	} else if(dd1.inches > dd2.inches) {
		return dd1;

	} else {
		return dd2;
	}
}


//lrgdisp()
void lrgdisp(Distance disp) {
	cout <<disp.feet <<"' -" <<disp.inches <<"\"" <<endl;
}