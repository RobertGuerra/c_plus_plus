#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    // input:  4,3,2,7,8,2,3,1
    // expected: [5, 6]

	vector<int> result;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[abs(nums[i]) - 1] > 0)
			nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
	}
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] > 0)
			result.push_back(i + 1);
	}
	return result;

}


int main()
{
    vector<int> myVec = { 4,3,2,7,3,2,3,1 };
	vector<int> returnVec;

	returnVec = findDisappearedNumbers(myVec);

	int i = 0;
	cout << "[";
	for (i; i < returnVec.size() - 1; i++)
	{
		cout << returnVec[i] << ", ";
	}
	cout << returnVec[i] << "]";
    cout << endl << endl;

    system("pause");
    return 0;
}