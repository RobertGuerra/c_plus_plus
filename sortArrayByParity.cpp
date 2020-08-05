#include <iostream>
#include <vector>

using namespace std;


vector<int> sortArrayByParity(vector<int>& A) {

	for (int home = 0, traverse = 0; traverse < A.size(); traverse++)
	{
		if (A[traverse] % 2 == 0)
		{
			swap(A[home++], A[traverse]);
		}
	}

	return A;
}


int main()
{
	// Input: [3, 1, 2, 4, 5, 7, 8]
	// Output : [2, 4, 8, 3, 5, 7]

	vector<int> myVec = { 3, 1, 2, 4, 5, 7, 8};
	vector<int> newVec;
	
	newVec = sortArrayByParity(myVec);

	int i = 0;

	cout << "input array:  [3, 1, 2, 4, 5, 7, 8]\n";

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