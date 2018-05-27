//exercise_file9
//Program to implement fraction addition using class and object concepts

#include <iostream>
using namespace std;

class addFraction {	//addFraction class declaration
	private:
		int numerator;
		int denominator;
	public:
		addFraction():numerator(0), denominator(0)	//no argument constructor
			{	}
		void getFraction();	//function to get fraction #declaration
		void add(addFraction, addFraction);	//function to add fraction #declaration
		void dispFraction();	//function to display fraction #declaration
};

//function defination
void addFraction::getFraction() {	//get fraction from user #defination
	char dummyChar;
	cin >>numerator >>dummyChar >>denominator;
}

void addFraction::add(addFraction frac1, addFraction frac2) {	//add two fraction #defination 
	numerator = (frac1.numerator * frac2.denominator) + (frac1.denominator * frac2.numerator);
	denominator = frac1.denominator * frac2.denominator;
}

void addFraction::dispFraction() {	//display added fraction #defination
	cout <<"\nAddition of two fraction is: " <<numerator <<"/" <<denominator;
}

int main() {
	char choice;
	addFraction fraction1, fraction2, fraction3;	//class object declaration 
	do {
		cout <<"\nEnter first fraction in (a/b) format: ";
		fraction1.getFraction();	//call to member function
		cout <<"Enter second fraction in (a/b) format: ";
		fraction2.getFraction();	//call to member function
		fraction3.add(fraction1, fraction2);	//call add member function with two arguments of class type
		fraction3.dispFraction();	//call to member function
		cout <<"\n\nDo you want to continue(y,n): ";
		cin >>choice;
	} while(choice == 'Y' || choice == 'y');	//loop termination statement
	cout <<endl;
	return 0;
}