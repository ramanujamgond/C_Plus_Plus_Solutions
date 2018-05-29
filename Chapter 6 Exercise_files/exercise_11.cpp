//exercise_file11
//Program to perform arithmetic function on fractions and convert them to there lowest terms

#include <iostream>
#include <cstdlib>
using namespace std;

class fraction {	//fraction class defination
	private:
		int numerator;		//datamembers
		int denominator;	//datamembers
	public:
		fraction():numerator(0), denominator(0)		//two argument constructor for creating objects
			{	}
		void getFraction();		//member functions input fraction from user #declared
		void arithOperation(fraction, fraction, char);		//member function performs arithmatic operation #declared
		void dispFraction() const;		//display fraction #declared
		void lowterms();		//display lowest term of fraction #declared
};

/* ----- Member function defination outside class ----- */
//getFraction()
void fraction::getFraction() {	//input fractions from user
	char dummychar;		//accept forward slash '/'
	cout <<"\nEnter a fraction in a/b form: ";
	cin >>numerator >>dummychar >>denominator;
}

//arithOperation()
void fraction::arithOperation(fraction frac1, fraction frac2, char operatr) {	//performs arithmatic operation based on its operator selected
	
	switch(operatr) {
		case '+':	//performs addition
			cout <<"\nAddition of two fraction is: ";
			numerator = (frac1.numerator * frac2.denominator) + (frac1.denominator * frac2.numerator);
			denominator = frac1.denominator * frac2.denominator;
		break;

		case '-':	//performs subtraction
			cout <<"\nSubtraction of two fraction is: ";
			numerator = (frac1.numerator * frac2.denominator) - (frac1.denominator * frac2.numerator);
			denominator = frac1.denominator * frac2.denominator;
		break;

		case '*':	//performs multiplication
			cout <<"\nMultiplication of two fraction is: ";
			numerator = frac1.numerator * frac2.numerator;
			denominator = frac1.denominator * frac2.denominator;
		break;

		case '/':	//performs division
			cout <<"\nDivision of two fraction is: ";
			numerator = frac1.numerator * frac2.denominator;
			denominator = frac1.denominator * frac2.numerator;
		break;

	}
}

//dispFraction()
void fraction::dispFraction() const{	//display fraction in a/b form
	cout <<numerator <<"/" <<denominator;
}

//lowTerms()
void fraction::lowTerms() {	//change fraction to lowest terms
	long tnum, tden, temp, gcd;

	tnum = labs(numerator);	//use non-negative copies and uses cstdlib headerfile
	tden = labs(denominator);	//use non-negative copies and uses cstdlib headerfile

	if(tden == 0) {		//check for 0/n
		cout <<"Illegasl fraction: division by 0";
		exit(1);
	} else if (tnum == 0) {		//check for 0/n
		numerator = 0; 
		denominator = 1;
		return;
	}
	//this 'while' loop finds the gcd of tnum and tden
	while(tnum != 0) {
		if(tnum <tden) {	//ensure numerator larger
			temp = tnum;	
			tnum = tden;
			tden = temp;	//swap the number
		}
		tnum = tnum - tden;		//substract them
	}
	gcd = tden;		//this is greatest common divisor
	numerator = numerator/gcd;		//divide both num and den by gcd
	denominator = denominator/gcd;		//subtract them
	cout <<numerator <<"/" <<denominator;
	cout <<endl;
}

int main() {
	fraction fraction1, fraction2, fraction3;	//class objects declared
	char oprt;	//select arithmatic operator
	cout <<"\nEnter first fraction: ";
	fraction1.getFraction();	//get fraction from user
	cout <<"\nEnter second fraction: ";
	fraction2.getFraction();	//get fraction from user
	cout <<"\nEnter an operator for arithmatic operation: ";
	cin >>oprt;
	fraction3.arithOperation(fraction1, fraction2, oprt);	//call arithOperation() to performs arithmatic operation
	fraction3.dispFraction();	//display fraction
	cout <<"\nLoswest terms of fraction is: ";
	fraction3.lowTerms();	//display lowest terms fraction

	cout <<endl;
	return 0;
}
