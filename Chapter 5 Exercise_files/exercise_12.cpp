//exercise_file12
//Exercise problem to revise the four fraction calulator using function.

#include<iostream>
using namespace std;

struct strctValue {
	int numerator;
	int denominator;
	char dummyslash;
};

strctValue fadd(strctValue, strctValue);
strctValue fsub(strctValue, strctValue);
strctValue fmul(strctValue, strctValue);
strctValue fdiv(strctValue, strctValue);
void strctDisp(strctValue);

int main() {
	strctValue value1, value2, addshow, subshow, mulshow, divshow;
	char option;
	cout <<"\nEnter value for first fraction in (a/b) format: ";
	cin >>value1.numerator >>value1.dummyslash >>value1.denominator;

	cout <<"Enter value for second fraction in (c/d) format: ";
	cin >>value2.numerator >>value2.dummyslash >> value2.denominator;

	cout <<"\nChoose an operator for performing respective operation (+, -, *, /): ";
	cin >>option;

	switch(option) {
		case '+':
		addshow = fadd(value1, value2);
		cout <<"\nValue of addition is: "; strctDisp(addshow);
		break;

		case '-':
		subshow = fsub(value1, value2);
		cout <<"\nValue of subtraction is: "; strctDisp(subshow);
		break;

		case '*':
		mulshow = fmul(value1, value2);
		cout <<"\nValue of multiplication is: "; strctDisp(mulshow);
		break;

		case '/':
		divshow = fdiv(value1, value2);
		cout <<"\nValue of division is: "; strctDisp(divshow);
		break;

		default:
		cout <<"Invalid operator";
	}

	cout <<endl;
	return 0;
}

//fadd()
strctValue fadd(strctValue val1, strctValue val2) {
	strctValue add;
	add.numerator = val1.numerator*val2.denominator + val1.denominator*val2.numerator;
	add.denominator = val2.denominator*val2.denominator;
	return add;
}

//fsub()
strctValue fsub(strctValue val1, strctValue val2) {
	strctValue sub;
	sub.numerator = val1.numerator*val2.denominator - val1.denominator*val2.numerator;
	sub.denominator = val1.denominator*val2.denominator;
	return sub;
}

//fmul()
strctValue fmul(strctValue val1, strctValue val2) {
	strctValue mul;
	mul.numerator = val1.numerator*val2.numerator;
	mul.denominator = val1.denominator*val2.denominator;
	return mul;
}

//fdiv()
strctValue fdiv(strctValue val1, strctValue val2) {
	strctValue div;
	div.numerator = val1.numerator*val2.denominator;
	div.denominator = val1.denominator*val2.numerator;
	return div;
}

//strctDisp()
void strctDisp(strctValue disp) {
	cout <<disp.numerator <<"/" <<disp.denominator;
}