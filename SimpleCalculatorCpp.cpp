//Simple command line Integer calculator
//Josh Weaver, 11/19/2013

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	bool finished = false;
	int firstInt, secondInt, finalInt, operationInt, continueInt;
	while (finished == false){
		firstInt, secondInt, finalInt, operationInt, continueInt = 0;
		
		cout << "What is your first integer? ";
		cin >> firstInt;
		cout << "\nWhat operation would you like to do? (1) Addition, (2) Subtraction, (3) Multiplication, (4) Division ";
		cin >> operationInt;
		if (! (operationInt == 1 || operationInt == 2 || operationInt == 3 || operationInt == 4)){
			cout << "Invalid Input, quitting the program.\n";
			return 0;
		}
		cout << "\nWhat is your second Integer? ";
		cin >> secondInt;
		if (operationInt == 1){
			finalInt = firstInt + secondInt;
			cout << "\n" << firstInt << " + " << secondInt << " = " << finalInt;
		}
		else if (operationInt == 2){
			finalInt = firstInt - secondInt;
			cout << "\n" << firstInt << " - " << secondInt << " = " << finalInt;
		}
		else if (operationInt == 3){
			finalInt = firstInt * secondInt;
			cout << "\n" << firstInt << " * " << secondInt << " = " << finalInt;
		}
		else if (operationInt == 4){
			finalInt = firstInt / secondInt;
			cout << "\n" << firstInt << " / " << secondInt << " = " << finalInt;
		}
		cout << "\nDo you want to do another calculation? (1) Yes, (2) No ";
		cin >> continueInt;
		if (continueInt == 2){
			finished = true;
		}
		else if (continueInt != 1){
			cout << "Invalid input, quitting the program.\n";
			return 0;
		}
	}	

	return 0;
}
