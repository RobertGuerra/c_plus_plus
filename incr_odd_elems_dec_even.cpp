/*
Odd Up, Even Down: Create a function that goes through the array, incrementing (+1) for each odd number and decrementing (-1)
for each even number.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

std::vector<int> transform(std::vector<int> arr) {
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] % 2 == 0)
			arr[i] -= 1;
		else
			arr[i] += 1;
	}

	// print new vector
	int i = 0;
	cout << "The transformed vector is: ";
	cout << "{ ";
	for (i; i < arr.size() - 1; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[i] << " }";
	cout << endl;
	return arr;
}

int main()
{
	vector<int> mainVec = { 2, 5, 8, 99, 23, 1, 44 };

	transform(mainVec);


	system("pause");
	return 0;
}