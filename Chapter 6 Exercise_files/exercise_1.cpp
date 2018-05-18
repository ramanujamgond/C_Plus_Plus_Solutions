//exercise_file1
//Exercise problems to imitates some functionality of basic data type int

#include <iostream>
using namespace std;

class Int{
	private:
		int value;
	public:
		Int():value(0){

		}
		Int(int val):value(val){

		}
		void dispValue();
		void addValue(Int, Int);
};

//dispValue defination
void Int::dispValue(){
	cout <<"value is: "<<value;
}

//addValue defination
void Int::addValue(Int num1, Int num2){
	value = num1.value+num2.value;
}

int main(){
	Int number1;
	Int number2(4);
	Int number3(10);
	number1.addValue(number2, number3);
	cout <<"After addition the ";
	number1.dispValue();
	cout <<endl;
	return 0;
}