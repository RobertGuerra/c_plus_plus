#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:

	vector<int> sortedSquares(vector<int>& A)
	{
		vector<int> returnVec;
		int numSquared = 0;

		if (A.size() == 0)
		{
			cout << "Empty!";
			return A;
		}

		for (int i = 0; i < A.size(); i++)
		{
			numSquared = pow(A[i], 2);
			returnVec.push_back(numSquared);
		}
		sort(returnVec.begin(), returnVec.end());
		return returnVec;
	}
};


int main()
{
	vector<int> myVec = { -6, 8, 1, -3 };
	vector<int> myVec2 = {};
	vector<int> squaredVec;
	Solution myObj;

	squaredVec = myObj.sortedSquares(myVec);


	cout << "First Array: ";
	for (int i = 0; i < squaredVec.size(); i++)
	{
		cout << squaredVec[i] << " ";
	}

	cout << endl << endl;


	cout << "Second Array: ";
	squaredVec = myObj.sortedSquares(myVec2);

	for (int i = 0; i < squaredVec.size(); i++)
	{
		cout << squaredVec[i] << " ";
	}

	cout << endl << endl;

	system("pause");
	return 0;