//exercise_file11
//Exercise problem to rewrite sterling structure of exercise 10 in chapter 4.

#include<iostream>
using namespace std;

struct sterling {
	int pound;
	int shilling;
	int pence;
};

sterling BritishCurrency(int, int, int);
sterling sterlingfunc(sterling, sterling);
void sterlingDisp(sterling);

int main() {
	int pound, shilling, pence;
	sterling firstValue, secondValue;
	sterling s1 = {2, 10, 5};
	sterling s2 = {9,18, 10};
	cout <<"\nEnter pound: "; cin >>pound;
	cout <<"Enter shilling: "; cin >>shilling;
	cout <<"Enter pence: "; cin >>pence;
	firstValue = BritishCurrency(pound, shilling, pence);
	secondValue = sterlingfunc(s1, s2);
	cout <<"\nFirst value is: "; sterlingDisp(firstValue);
	cout <<"\nSecond value is: "; sterlingDisp(secondValue);
	cout <<endl;
	return 0;
}

//BritishCurrency()
sterling  BritishCurrency(int pnd, int shl, int pen) {
	sterling currency;
	currency.pound = pnd;
	currency.shilling = shl;
	currency.pence = pen;
	return currency;
}

//sterlingfunc()
sterling sterlingfunc(sterling ss1, sterling ss2) {
	sterling result;
	result.pound = ss1.pound + ss2.pound;
	result.shilling = ss1.shilling + ss2.shilling;
	result.pence = ss1.pence + ss2.pence;
	
	if(result.pence > 11) {
		result.shilling++;
		result.pence = 0;
	}

	if(result.shilling > 19) {
		reuslt.pound++;
	}

	return result;
}

//sterlingDisp()
void sterlingDisp(sterling valueDisp) {
	cout <<"\x9c" <<valueDisp.pound <<":" <<valueDisp.shilling <<":" <<valueDisp.pence;
}