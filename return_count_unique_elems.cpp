#include <iostream>
#include <vector>

using namespace std;


int removeDuplicates(vector<int>& nums)
{
	int length = 1;
	int ptr1 = 0;

	if (nums.size() == 0)
	{
		return 0;
	}
	for (int ptr2 = ptr1 + 1; ptr2 < nums.size(); ptr2++)
	{
		if (nums[ptr2] != nums[ptr1])
		{
			nums[ptr1 + 1] = nums[ptr2];
			ptr1++;
			length++;
		}
	}

	return length;
}


int main()
{
	vector<int> myVec = { 1, 1, 1, 5, 7, 8 };
	int returnVal = 0;

	returnVal = removeDuplicates(myVec);

	cout << returnVal << endl << endl;



	system("pause");
	return 0;
}