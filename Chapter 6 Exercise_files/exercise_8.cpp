//exercise_file8
//Program to assign a serial number to objects and show the assigned serial number

#include <iostream>
using namespace std;

class serailnumberCount {	//searilnumberCount class defined
	private:
		static int count;	//static data member to counts object created
		unsigned int serialNumber; //store objects serail number
	public:
		serailnumberCount() {	//no-argument constructor, increments count, assign serial number
			count++;
			serialNumber = count;
		}
		void dispserailNumber() const;	//member function to show serail number #declaration
};

int serailnumberCount::count = 0;	//defination of count

//function defination
void serailnumberCount::dispserailNumber() const {	//member function #defination 
	cout <<"I am object number " <<serialNumber;
}

int main() {
	serailnumberCount obj1, obj2, obj3;	//class object created
	obj1.dispserailNumber();	//call member function to display serial number
	cout <<endl;
	obj2.dispserailNumber();	//call member function to display serial number
	cout <<endl;
	obj3.dispserailNumber();	//call member function to display serial number
	cout <<endl;
	return 0;
}