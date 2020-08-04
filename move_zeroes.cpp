// when there are zeros in the array, move them to the back of array

#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {

	int ptr1 = 0;

	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] != 0)
		{
			swap(nums[ptr1], nums[i]);
			ptr1++;

		}
	}

	

}


int main()
{
	// Input: [0, 1, 0, 3, 12]
	// Output : [1, 3, 12, 0, 0]

	vector<int> myVec = { 0, 1, 0, 3, 12 };

	cout << "Given Vector is: [0, 1, 0, 3, 12]\n";

	moveZeroes(myVec);

	cout << "Resulting Output: [";
	
	int i = 0;

	for (i; i < myVec.size() - 1; i++)
	{
		cout << myVec[i] << ", ";
	}
	cout << myVec[i] << "]\n";

	cout << endl << endl;


	system("pause");
	return 0;
}