#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// Function Prototypes
void showMenu();
int additionOperation();
int subtractionOperation();
int multiplicationOperation();
int divisionOperation();
int squareOperation();
int squareRootOperation();
int cubeOperation();
int cubeRootOperation();
int ExponentOperation();

int main()
{

	// Number entered by user to choose math operation.
	int choice;

	// Using a do while loop to validate choices and present the mnu until a user choses a valid choice.
	do
	{
		//Shows menu displaying choices of math operations available to the user.
		showMenu();
		cout << "Please enter a choice to perform a math operation." << endl;
		cin >> choice;
		if (choice == '0')
		{
			cout << "Program exiting" << endl;
			exit(0);
		}
	}
	while (choice < 0 || choice > 10);

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

			case 5: squareRootOperation();
			break;

			case 6: squareOperation();
			break;

			case 7: cubeOperation();
			break;

			case 8: cubeRootOperation();
			break;

			case 9: ExponentOperation();
			break;

			default: cout << "Please select one of the choices listed." << endl;
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
	cout << " 5. Square Root " << endl;
	cout << " 6. Square " << endl;
	cout << " 7. Cube " << endl;
	cout << " 8. Cube Root" << endl;
	cout << " 9. Exponent Calculations" << endl;
	cout << " 0. Exit the program" << endl;
}

// Function for addition operations.
int additionOperation()
{
	double firstNumber, secondNumber, result;
	cout << "Enter the first number." << endl;
	cin >> firstNumber;
	cout << "Enter the second number." << endl;
	cin >> secondNumber;
	cout << "You entered " << firstNumber << " and " << secondNumber << endl;
	result = firstNumber + secondNumber;
	cout << "The sum of the two numbers entered is: " << result << endl;

	return result;
}

// Function for subtracting operations.
int subtractionOperation()
{
	double firstNumber, secondNumber, result;
	cout << "Enter the first number." << endl;
	cin >> firstNumber;
	cout << "Enter the second number." << endl;
	cin >> secondNumber;
	cout << "You entered " << firstNumber << " and " << secondNumber << endl;
	result = firstNumber - secondNumber;
	cout << "The differene of the two numbers entered is: " << result << endl;

	return result;
}

// Function for multiplication operations.

int multiplicationOperation()
{
	double firstNumber, secondNumber, result;
	cout << "Enter the first number." << endl;
	cin >> firstNumber;
	cout << "Enter the second number." << endl;
	cin >> secondNumber;
	cout << "You entered " << firstNumber << " and " << secondNumber << endl;
	result = firstNumber * secondNumber;
	cout << "The product of the numbers entered is: " << result << endl;

	return result;
}


// Function for division operations.

int divisionOperation()
{
	double firstNumber, secondNumber, result;
	cout << "Enter the first number." << endl;
	cin >> firstNumber;
	cout << "Enter the second number." << endl;
	cin >> secondNumber;

// Input validation against divide by zero operations.
	if (secondNumber == 0)
	{
		cout << "Cannot divide by a zero value" << endl;
	}
	cout << "You entered " << firstNumber << " and " << secondNumber << endl;
	result = firstNumber / secondNumber;
	cout << "The quotient of the numbers entered is: " << result << endl;

	return result;
}

int squareRootOperation()
{
	double firstNumber, baseNumber;
	cout << "Enter the number you would like the square root of." << endl;
 	cin >> firstNumber;
 	baseNumber = firstNumber;
 	baseNumber = baseNumber * baseNumber;
	cout << "You entered " << firstNumber << endl;
	cout << "The square root of "  << firstNumber << " is " << baseNumber << endl;

	return baseNumber;
}

int squareOperation()
{
	double firstNumber, baseNumber;
	cout << "Enter the number you would like the square of." << endl;
	cin >> firstNumber;
	baseNumber = firstNumber;
	firstNumber = sqrt(firstNumber);
	cout << "The square of " << baseNumber << " is " << firstNumber << endl;

	return firstNumber;
}

int cubeOperation()
{
	double firstNumber, baseNumber;
	cout << "Enter the number you would like the cube of." << endl;
	cin >> firstNumber;
	baseNumber = firstNumber;
	firstNumber = firstNumber * firstNumber * firstNumber;
	cout << "The cube of " << firstNumber << " is " << baseNumber << endl;

	return baseNumber;
}

int cubeRootOperation()
{
	double firstNumber, baseNumber;
	cout << "Enter the number you would like the cube root of." << endl;
	cin >> firstNumber;
	baseNumber = firstNumber;
	firstNumber = cbrt(firstNumber) ;
	cout << "The cube root of " << firstNumber << " is " << baseNumber << endl;

	return baseNumber;
}

int ExponentOperation()
{
	double firstNumber, exponent, result;
	cout << "Enter a number." << endl;
	cin >> firstNumber;
	cout << "Enter an exponent number you would like to raise to the power of." << endl;
	cin >> exponent;
	result = pow(firstNumber, exponent);
	cout << "The number " << firstNumber << " raised to the power of " << exponent << " is " << result << endl;

	return result;
}
