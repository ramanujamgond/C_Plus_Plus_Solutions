//exercise_file10
//Exercise problem to demonstrate global variable and local static variable.

#include<iostream>
using namespace std;

int count=0;

void globalVar();
int localstatic();

int main() {
	int store;
	globalVar();
	globalVar();
	globalVar();
	globalVar();
	globalVar();
	globalVar();
	globalVar();
	globalVar();
	globalVar();
	globalVar();
	localstatic();
	localstatic();
	localstatic();
	localstatic();
	localstatic();
	localstatic();
	store = localstatic();

	cout <<"\nI have been called " <<count <<" times using global variable" <<endl;
	cout <<"\nI have been called " <<store <<" times using local static variable" <<endl;

	return 0;
}

//globalVar() 
void globalVar() {
	count++;
}

//localstatic();
int localstatic() {
	static int remember = 0;
	remember++; 
	return remember;
}