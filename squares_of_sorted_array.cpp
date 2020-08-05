#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortedSquares(vector<int>& A) {

	for (int i = 0; i < A.size(); i++)
	{
		A[i] = pow(A[i], 2);
	}
	sort(A.begin(), A.end());

	return A;

}



int main()
{
	// Input:   [8, -5, -1, 0, 2]
	// Output : [0, 1, 4, 25, 64]

	vector<int> myVec = { 8, -5, -1, 0, 2 };
	vector<int> newVec;

	newVec = sortedSquares(myVec);

	int i = 0;

	cout << "input array:  [8, -5, -1, 0, 2]\n";

	cout << "output array: [";
	for (i; i < newVec.size() - 1; i++)
	{
		cout << newVec[i] << ", ";
	}
	cout << newVec[i] << "]";

	cout << endl << endl;


	system("pause");
	return 0;
}