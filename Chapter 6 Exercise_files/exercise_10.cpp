//exercise_file10
//Program to show the position of ship and its serial number.

#include <iostream>
using namespace std;

class angle {	//angle class declaration
	private:
		int degrees;
		float minutes;
		char direction;
	public:
		void getAngle();	//get angle member function #declaration 
		void dispAngle() const; //angle display member function #declaration
};

class ship {	//ship class defination
	private:
		angle latitude, longitude;
		static int count;
		unsigned int shipNumber;
	public:
		ship() {	//no argument constructor, increments count, assign serial number
			count++;
			shipNumber = count;
		}
		void getPosition();	//get position member function #declaration
		void display() const;	//display position member function #declaration 
};

int ship::count = 0;	//defination of count

//member function defination 
void angle::getAngle() {	//getAngle() #defination
	cout <<"\nEnter degrees: ";
	cin >>degrees;
	cout <<"Enter minutes: ";
	cin >>minutes;
	cout <<"Enter directions(E, W, N, S): ";
	cin >>direction;
}

void angle::dispAngle() const{	//dispAngle() #defination 
	cout <<degrees <<"\xF8" <<minutes <<"\' " <<direction;
	if(direction == 'E' || direction == 'e' || direction == 'W' || direction == 'w') {
		cout <<" Longitude !";
	} if(direction == 'N' || direction == 'n' || direction == 'S' || direction == 's') {
		cout <<" Latitude !";
	}
}

void ship::getPosition() {	//getPosition() #defination
	cout <<"\nEnter longitude of ship: ";
	longitude.getAngle();
	cout <<"\nEnter latitude of ship: ";
	latitude.getAngle();
}

void ship::display() const{	//display() #defination 
	cout <<"Ship Serial Number: " <<shipNumber <<endl;
	longitude.dispAngle();
	cout <<"\n";
	latitude.dispAngle();
}

int main() {
	ship ship1, ship2, ship3;	//class object defined
	cout <<"\nEnter first ship position: ";
	ship1.getPosition();	//call member function for get position from user
	cout <<"\nEnter second ship position: ";
	ship2.getPosition();	//call member function for get position from user
	cout <<"\nEnter third ship position: ";
	ship3.getPosition();	//call member function for get position from user

	cout <<"\nFirst Ship Position is: \n";
	ship1.display();	//call member function to display serail number and position of ship
	cout <<endl;
	cout <<"\nSecond Ship Position is: \n";
	ship2.display();	//call member function to display serail number and position of ship
	cout <<endl;
	cout <<"\nThird Ship Position is: \n";
	ship3.display();	//call member function to display serail number and position of ship
	cout <<endl <<endl;

	return 0;
}
