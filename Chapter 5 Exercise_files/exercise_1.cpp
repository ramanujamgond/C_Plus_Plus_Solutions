//exercise_file1
//Exercise problem to find the area of a circle using function

#include<iostream>
using namespace std;

float circarea(float);

int main() {
	float rad;
	cout <<"\nEnter radius of a circle: ";
	cin >>rad;
	cout <<"Area of circle is: " <<circarea(rad) <<endl;
	return 0;
}

//circarea()
float circarea(float rads) {
	return 3.14159*rads*rads;
}