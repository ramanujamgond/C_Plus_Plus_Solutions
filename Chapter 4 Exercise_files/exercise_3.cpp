//structure to calculate the volume of a room
//volume.cpp

#include<iostream>
using namespace std;
////////////////////////////////////
struct Distance {
	int feet;
	float inches;
};
////////////////////////////////////
struct volume {
	Distance length;
	Distance width;
	Distance height;
};
/////////////////////////////////////

int main() {
	float l, w, h;
	volume room = {{2, 6.3}, {4, 2.3}, {3, 8.3}};

	cout <<"Length of the room is: " <<room.length.feet <<"\'-" <<room.length.inches <<"\"" <<endl
		 <<"Width of the room is: " <<room.width.feet <<"\'-" <<room.width.inches <<"\"" <<endl
		 <<"Height of the room is: " <<room.height.feet <<"\'-" <<room.height.inches <<"\"" <<endl;

	l = room.length.feet + room.length.inches/12.0;
	w = room.width.feet + room.width.inches/12.0;
	h = room.height.feet + room.height.inches/12.0;

	float vol = l*w*h;

	cout <<"\nVolume of the room is: " <<vol <<" cubic feet" <<endl;
	return 0;
}