//exercise_file2
//Model a tollboth scenario using class and objects

#include <iostream>
using namespace std;

class tollboth{
	private:
		unsigned int totalcarNum;
		double totalMoney;
	public:
		tollboth():totalcarNum(0), totalMoney(0){
		}
		void payingCar(){
			totalcarNum++;
			totalMoney+=0.50;
		}
		void nopayCar(){
			totalcarNum++;
		}
		void display() const{
			cout <<"\nTotal Number of cars passed on the toll both: " <<totalcarNum;
			cout <<"\nTotal Money collected at toll both: " <<totalMoney;
		}
};

int main(){
	tollboth button;
	char count;

	cout <<"Press 'c' to count paying car and 'm' to count non paying car.";
	cout <<"\nPress ESC to exit from program.";
	cout <<endl <<endl;
	do{
		cout <<"Press Key: ";
		cin >> count;
		if(count=='c' || count=='C'){
			button.payingCar();
		} else if(count=='m' || count=='M'){
			button.nopayCar();
		} else {
			if(count == 27) {
				break;
			} else {
				cout <<"Invalid key pressed!\n";
			}
		}
	}while(count != 27);

	button.display();

	cout <<endl;
	return 0;
}