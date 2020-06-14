/*
Difference of Max and Min Numbers in the Array
Create a function that takes an array and returns the difference 
between the biggest and smallest numbers using vectors.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int differenceMaxMin(std::vector<int> arr) {
	int minNum = *min_element(arr.begin(), arr.end()); // find min element
	int maxNum = *max_element(arr.begin(), arr.end()); // find max element

	return maxNum - minNum;
}

int main()
{
	vector<int> myVec = { 2, 5, 99, 25, -34, 18 };

	int result = differenceMaxMin(myVec);

	cout << result << endl;

	system("pause");
	return 0;
}