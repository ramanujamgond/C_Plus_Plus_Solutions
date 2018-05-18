//Structure called pointis used to model a point on two dimensional plane.
//point.cpp

#include<iostream>
using namespace std;
////////////////////////////////////
struct point {
	int x_coordinate;
	int y_coordinate;
};
////////////////////////////////////
int main()
{
	point p1, p2, p3;
	cout <<"Enter coordinates for p1: ";
	cin >>p1.x_coordinate >>p1.y_coordinate;
	cout <<"Enter coordinates for p2: ";
	cin >>p2.x_coordinate >>p2.y_coordinate;
	p3.x_coordinate = p1.x_coordinate + p2.x_coordinate;
	p3.y_coordinate = p1.y_coordinate + p2.y_coordinate;
	cout <<"Coordinates of p1 + p2 are: " <<p3.x_coordinate <<", " <<p3.y_coordinate;
	return 0;
}