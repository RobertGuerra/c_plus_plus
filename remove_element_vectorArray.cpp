#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int value)
{
	int pointer1 = 0;

	for (int pointer2 = 0; pointer2 < nums.size(); pointer2++)
	{
		if (nums[pointer2] != value)
		{
			nums[pointer1] = nums[pointer2];
			pointer1++;
		}

	}
	return pointer1;
}

int main()
{
	vector<int> myVec = { 1, 1, 3, 4, 3 };
	int value = 1;
	int valReturned = 0;

	valReturned = removeElement(myVec, value) ;

	cout << valReturned << endl << endl;


	system("pause");
	return 0;
}