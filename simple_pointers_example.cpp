#include <iostream>

using namespace std;

void swap1(int num1, int num2);
void swap2(int *ptNum1, int *ptNum2);

int main()
{
	int x = 0, y = 0;

	cout << "Enter first number: ";
	cin >> x;
	cout << endl;
	cout << "Enter second number: ";
	cin >> y;
	cout << endl;

	cout << "The numbers you entered were " << x << " and " << y << endl << endl;

	cout << "using swap1 void function (no pointers) : " << endl;
	swap1(x, y);
	cout << "value of x: " << x << " value of y: " << y << endl;

	cout << endl;
	cout << "using swap2 void function (using pointers): " << endl;
	swap2(&x, &y);
	cout << "value of x: " << x << " value of y: " << y << endl;

	cout << endl << endl;

	system("pause");
	return 0;
}

void swap1(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
void swap2(int *ptNum1, int *ptNum2)
{
	int temp;
	temp = *ptNum1;
	*ptNum1 = *ptNum2;
	*ptNum2 = temp;
}