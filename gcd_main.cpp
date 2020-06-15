/*
Recursion: GCD
Write a function that calculates the GCD (Greatest Common Divisor) of two numbers recursively.

*/
#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main()
{

	int num1 = 0, num2 = 0;
	char answer = 'Y';

	do{
		cout << "Enter two numbers:\n";
		cin >> num1 >> num2;
		cout << endl << endl;

		cout << "The GCD (Greates Common Divisor) of the two numbers is: " << gcd(num1, num2);
		cout << endl << endl;

		cout << "Choose two more numbers (y/n)?\n";
		cin >> answer;

	} while (answer == 'y' || answer == 'Y');

	
	cout << endl << endl;


	system("pause");
	return 0;
}