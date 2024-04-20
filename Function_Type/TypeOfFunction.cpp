/*
This code shows us some type of functions.

Developer = Barış Someroğlu
Date = 20.04.2024 - 09:00 pm
*/

#include <iostream>
#include <string>

using namespace std;

// Prototype of functions
int FullDivision(double, double);
double FractionalDivision(double, double);
bool IsThereDecimal(double, double);
void WriteOnScreen(int, double, bool, string);

int main()
{
	int Write1;
	Write1 = FullDivision(9, 4); // Call the function
	cout << "Result 1 = " << Write1 << endl;

	cout << "\n";

	double Write2;
	Write2 = FractionalDivision(9, 4); // Call the function
	cout << "Result 2 = " << Write2 << endl;

	cout << "\n";

	int Number3 = 8, Number4 = 19;
	
	if (IsThereDecimal(19, 8)) // Call the function
		cout << "There is Full Division";

	else
		cout << "There is Fractional Division";

	cout << "\n";

	int a = 10;
	double b = 10.7;
	bool c = false;
	string d = "Functions";

	WriteOnScreen(a, b, c, d); // Call the function

	cout << "\n";

	return 0;
}

// Function definition
int FullDivision(double Number1, double Number2)
{
	return Number1 / Number2;
}

// Function definition
double FractionalDivision(double Number1, double Number2)
{
	return Number1 / Number2;
}

// Function definition
bool IsThereDecimal(double Number1, double Number2)
{
	double Result = Number1 / Number2;

	double Total = (int)Result; // Total = static_cast<int>(Result);

	if (Total == Result)
		return true;

	else
		return false;
}

// Function definition
void WriteOnScreen(int a, double b, bool c, string d)
{
	cout << endl << a << " " << b << " " << c << " " << d;
}
