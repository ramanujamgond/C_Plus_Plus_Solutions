//exercise_file6
//Program to implement the location measurement in ocean navigation

#include <iostream>
using namespace std;

//angle class represent locations and measurements in a ocean navigation
class angle {	//angle class defination 
	private:
		int degrees;
		float minutes;
		char direction;
	public:
		angle():degrees(0), minutes(0), direction(0)	//no-argument constructor
			{	}
		angle(int deg, float min, char dir):degrees(deg), minutes(min), direction(dir)	//three arguments constructor
			{	}
		void putAngle(int, float, char);	//putAngle() member function to set angle #declaration
		void dispAngle() const;	//dispAngle() member function to display angle #declaration
};

//member function definations
void angle::putAngle(int dgr, float mnt, char dir) { //putAngle() member function #defination
	degrees = dgr;
	minutes = mnt;
	direction = dir;
}

void angle::dispAngle() const{	//dispAngle() member function #defination
	cout <<"Angle: " <<degrees <<"\xF8 " <<minutes <<"\' " <<direction;

	switch(direction) {		//switch case used to display longitude and latitude of angle
		case 'N':
			cout <<" Latitude";
			break;
		case 'n':
			cout <<" Latitude";
			break;
		case 'S':
			cout <<" Latitude";
			break;
		case 's':
			cout <<" Latitude";
			break;
		case 'E':
			cout <<" Longitude";
			break;
		case 'e':
			cout <<" Longitude";
			break;
		case 'W':
			cout <<" Longitude";
			break;
		case 'w':
			cout <<" Longitude";
			break;
	}
}

int main() {	//main function
	int degr;
	float mint;
	char drct, choice;
	cout <<endl;
	angle angle1(146, 34.6, 'S');	//objects of class angle declared and initialized
	angle1.dispAngle();	//member function call to display angle
	cout <<endl;
	angle angle2;	//objects of class angle declared

	do {
		cout <<"\nEnter the degree: ";
		cin >>degr;
		cout <<"Enter the minutes: ";
		cin >>mint;
		cout <<"Enter the direction(N, S, E, W): ";
		cin >>drct;

		angle2.putAngle(degr, mint, drct);	//objects initialized
		angle2.dispAngle();	//member function call to display angle 

		cout <<"\n\nDo you want to enter another angle for navigation (Y, N): ";
		cin >>choice;
	} while(choice == 'Y' || choice == 'y' );	//loop exit statement
	cout <<endl;
	return 0;
}