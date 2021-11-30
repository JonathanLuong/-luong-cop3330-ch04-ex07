/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jonathan Luong
 */

#include "std_lib_facilities.h"

double convert(string numString) {
	double num;

	if (numString == "zero") {
		num = 0;
	}
	else if (numString == "one") {
		num = 1;
	}
	else if (numString == "two") {
		num = 2;
	}
	else if (numString == "three") {
		num = 3;
	}
	else if (numString == "four") {
		num = 4;
	}
	else if (numString == "five") {
		num = 5;
	}
	else if (numString == "six") {
		num = 6;
	}
	else if (numString == "seven") {
		num = 7;
	}
	else if (numString == "eight") {
		num = 8;
	}
	else if (numString == "nine") {
		num = 9;
	}

	return num;
}

int main()
{
	string operation;	// Can be + - * / plus minus mul div
	string d1;
	string d2;
	double res = 0;

	cout << "Please enter an operation \n"
		<< "followed by two operands\n";

	cin >> operator >> d1 >> d2;

	double num1 = convert(d1);
	double num2 = convert(d2);

	if (operation == "+") res = num1 + num2;
	else if (operation == "-") res = num1 - num2;
	else if (operation == "*") res = num1 * num2;
	else if (operation == "/") {
		if (num2 == 0)
			operation = "divzero";
		else
			res = num1 / num2;
	}
	// if wrong operator then it flags it
	else operation = "unknown";

	if (operation == "unknown")
		cout << "I don't know this operator!\n";
	else if (operation == "divzero")
		cout << "No division by zero!\n";
	else
		cout << num2 << ' ' << operation << ' ' << num2 << " = " << res << '\n';
	cout << "Try again\n";


	return 0;
}