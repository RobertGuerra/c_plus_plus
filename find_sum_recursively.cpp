/*

Recursion: Sum
Write a function that finds the sum of the first n natural numbers. Make your function recursive.

*/
#include <iostream>

using namespace std;


int sum(int n) {
	if (n < 0)
		return 0;
	else
		return n + sum(n - 1);
}


int main()
{
	int num = 0;
	cout << "Enter an number any number: ";
	cin >> num;
	
	cout << "The sum of " << num << " and all the numbers before it is " << sum(num);

	cout << endl << endl;

	system("pause");
	return 0;
}