/*
Factorize a number
Create a function that takes a number as its argument and returns an array of all its factors.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

std::vector<int> factorize(int n) {
	std::vector<int> myVec;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			myVec.push_back(i);
	}
	return myVec;
}


int main()
{
	vector<int> myVec;
	int num = 0;
	cout << "Enter a number: ";
	cin >> num;

	myVec = factorize(num);

	cout << endl << endl;

	cout << "Here is a liste of it's factors: ";
	int i = 0;
	cout << "[";
	for (i; i < myVec.size() - 1; i++)
		cout << myVec[i] << ", ";
	cout << myVec[i] << "]";

	cout << endl;

	system("pause");
	return 0;
}