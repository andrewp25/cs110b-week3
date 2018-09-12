#include <iostream>
#include <cmath>
using namespace std;

// Function Prototypes
void showMenu();
int additionOperation();
int subtractionOperation();
int multiplicationOperation();
int divisionOperation();

int main()
{
	// Number entered by user to choose math operation.
	int choice;

	//Shows menu displaying choices of math operations available to the user. 
	showMenu();
	cout << "Please enter a choice to perform a math operation." << endl;
	cin >> choice;

	switch (choice)
	{
		case 1: additionOperation();
		break;

		case 2: subtractionOperation();
		break;

		case 3: multiplicationOperation();
		break;

		case 4: divisionOperation();
		break;
	}

	return 0;
}

// Function to display the calculator menu choice.
void showMenu()
{
	cout << "Enter the number of the mathematical operation you would like to perform. " << endl;
	cout << " 1. Addition " << endl;
	cout << " 2. Subtraction " << endl;
	cout << " 3. Multiplication " << endl;
	cout << " 4. Division " << endl;
	cout << " 5. Square " << endl;
	cout << " 6. Square Root " << endl;
	cout << " 7. Cube " << endl;
	cout << " 8. Cube Root" << endl;
	cout << " 9. Exponent Calculations" << endl;
}

// Function for addition operations.
int additionOperation()
{
	double firstAddition, secondAddition, sumResult;
	cout << "Enter the first number." << endl;
	cin >> firstAddition;
	cout << "Enter the second number." << endl;
	cin >> secondAddition;
	cout << "You entered " << firstAddition << " and " << secondAddition << endl;
	sumResult = firstAddition + secondAddition;
	cout << "The sum of the two numbers entered is: " << sumResult << endl;

	return sumResult;
}

// Function for subtracting operations.
int subtractionOperation()
{
	double firstSubtraction, secondSubtraction, subtractionResult;
	cout << "Enter the first number." << endl;
	cin >> firstSubtraction;
	cout << "Enter the second number." << endl;
	cin >> secondSubtraction;
	cout << "You entered " << firstSubtraction << " and " << secondSubtraction << endl;
	subtractionResult = firstSubtraction - secondSubtraction;
	cout << "The differene of the two numbers entered is: " << subtractionResult << endl;

	return subtractionResult;
}

// Function for multiplication operations.

int multiplicationOperation()
{
	double firstMultiplication, secondMultiplication, multiplicationResult;
	cout << "Enter the first number." << endl;
	cin >> firstMultiplication;
	cout << "Enter the second number." << endl;
	cin >> secondMultiplication;
	cout << "You entered " << firstMultiplication << " and " << secondMultiplication << endl;
	multiplicationResult = firstMultiplication * secondMultiplication;
	cout << "The product of the numbers entered is: " << multiplicationResult << endl;

	return multiplicationResult;
}


// Function for division operations.

int divisionOperation()
{
double firstDivsion, secondDivision, divisionResult;
cout << "Enter the first number." << endl;
cin >> firstDivsion;
cout << "Enter the second number." << endl;
cin >> secondDivision;

// Input validation against divide by zero operations.
		if (secondDivision == 0)
		{
			cout << "Cannot divide by a zero value" << endl;
		}
cout << "You entered " << firstDivsion << " and " << secondDivision << endl;
divisionResult = firstDivsion / secondDivision;
cout << "The quotient of the numbers entered is: " << divisionResult << endl;

return divisionResult;
}
