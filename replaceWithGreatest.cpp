#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> replaceElements(vector<int>& arr) {

	if (arr.size() == NULL)
	{
		return arr;
	}

	// iterate through array
	int maxValue = -1;

	for (int i = arr.size() - 1; i >= 0; --i) {			// { 17, 18, 5, 4, 6, 1 }
		int temp = arr[i];								// give arr[i] to temp
		arr[i] = maxValue;								// give maxValue to arr[i]
		maxValue = max(maxValue, temp);					// use max function to compare maxValue and temp
	}

	return arr;
}

int main()
{
	vector<int> myVec = { 17, 18, 5, 4, 6, 1 };
	vector<int> newVec = {};

	newVec = replaceElements(myVec);

	for (int i = 0; i < newVec.size(); i++)
	{
		cout << newVec[i] << " ";
	}

	cout << endl << endl;


	system("pause");
	return 0;
}