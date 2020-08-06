#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int thirdMax(vector<int>& nums) {

	// Input:   heights = [1, 2, -234564, -234]
	// Output : 1
	long long max = nums[0], secondMax = LONG_MIN, thirdMax = LONG_MIN;

	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] > max)
		{
			thirdMax = secondMax;
			secondMax = max;
			max = nums[i];
		}
		else if (nums[i] < max && nums[i] > secondMax)
		{
			thirdMax = secondMax;
			secondMax = nums[i];
		}
		else if (nums[i] < secondMax &&  nums[i] > thirdMax)
		{
			thirdMax = nums[i];
		}
	}

	return (thirdMax == LONG_MIN ? max : thirdMax);

}



int main()
{
	// Input:   heights = [1, 2, -234564, -234]
	// Output : 2

	vector<int> myVec = { 1, 2, -234564, -234 };
	int retValue;

	retValue = thirdMax(myVec);

	cout << "The 3rd largest number is: " << retValue;

	cout << endl << endl;


	system("pause");
	return 0;
}