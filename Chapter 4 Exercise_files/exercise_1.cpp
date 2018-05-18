//structure fo storing a phone number
//phone.cpp

#include<iostream>
using namespace std;
//////////////////////////////////
struct phone {
	int area_code;
	int exchange_code;
	int number;
};
//////////////////////////////////
int main()
{
	phone ph1, ph2;
	ph1.area_code = 212;
	ph1.exchange_code = 767;
	ph1.number = 8900;
	//phone ph1 = {212, 767, 8900};
	cout <<"Enter your area code, exchange and number: ";
	cin >>ph2.area_code >>ph2.exchange_code >>ph2.number;
	cout <<"My number is: ("<<ph1.area_code <<") " <<ph1.exchange_code <<"-" <<ph1.number <<endl;
	cout <<"Your number is: ("<<ph2.area_code <<") " <<ph2.exchange_code <<"-" <<ph2.number <<endl;
	return 0;
}