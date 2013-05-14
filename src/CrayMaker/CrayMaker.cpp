// CrayMaker.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <string>
#include "conio.h"

using namespace std;

int main()
{
	int x = 10, y = 3;
	int temp = (x + y);

	cout << "equation: " << x << " + " << y << " = ";
	cout << temp << endl;

	cout << "This is a test. Press 'Y' to exit" << endl;
	cout << "The character was: " << endl;
	
	int character;

	do{

		character = _getch();
		character = toupper(character);

		_putch(character);
		_putch('\r');
		_putch('\n');

	} while(character != 'Y');

	cout << "Dat ish cray!!" << endl;

	return 0;
}

