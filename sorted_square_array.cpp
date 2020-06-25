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
	vector<int> myVec = { -4, -1, 0, 3, 10 };
	vector<int> squaredVec;
	Solution myObj;

	squaredVec = myObj.sortedSquares(myVec);

	for (int i = 0; i < squaredVec.size(); i++)
	{
		cout << squaredVec[i] << " ";
	}

	cout << endl << endl;

	system("pause");
	return 0;
}