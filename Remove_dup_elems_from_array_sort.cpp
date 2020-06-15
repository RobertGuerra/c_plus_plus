/*
Purge and Organize
Given an array of numbers, write a function that returns an array that...

	Has all duplicate elements removed.
	Is sorted from least value to greatest value.

*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<int> uniqueSort(std::vector<int> arr) {

	// create a new vector
	std::vector<int> newVec;

	//sort the vector
	std::sort(arr.begin(), arr.end());

	// now the extra numbers become indeterminate
	auto last = std::unique(arr.begin(), arr.end());

	// erase extra numbers
	arr.erase(last, arr.end());

	// fill new vector
	for (int i = 0; i < arr.size(); i++)
		newVec.push_back(arr[i]);
	return newVec;
}

int main()
{

	vector<int> myVec = { 1, 2, 3, 9, 1, 2, 1, 4, 6, 7, 9, 2, 1, 2, 2, 8, 5, 10 };

	vector<int> sortedVec = uniqueSort(myVec);

	int i = 0;
	cout << "{ ";
	for (i; i < sortedVec.size() - 1; i++)
		cout << sortedVec[i] << ", ";
	cout << sortedVec[i] << " }";

	cout << endl << endl;


	system("pause");
	return 0;
}