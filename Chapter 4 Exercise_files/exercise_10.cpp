//Structure used to store old style british monetary system.
//british_monetary.cpp

#include<iostream>
using namespace std;
///////////////////////////////////////////////
struct sterling {
	int pounds;
	int shilling;
	int pence;
};
///////////////////////////////////////////////
int main() {
	sterling money;
	double dec_pound, decfrac, decpence, dec_pence;
	int user_pound, user_pence;
	cout <<"Enter the decimal pound: ";
	cin >>dec_pound;

	user_pound = static_cast<int>(dec_pound);
	decfrac = dec_pound - user_pound;
	dec_pence = decfrac*20;
	user_pence = static_cast<int>(dec_pence);
	decpence = dec_pence - user_pence;

	money.pounds = user_pound;
	money.shilling = dec_pence;
	money.pence = decpence*12;

	cout <<"Amount in old style system i.e (pounds-shilling-pence format): ";
	cout <<"\x9C" <<money.pounds <<"." <<money.shilling <<"." <<money.pence <<endl;

	return 0; 
}