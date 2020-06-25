#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int findNumbers(vector<int>& nums) {
		// keep count
		auto total = 0;

		for (int i = 0; i < nums.size(); i++)     // array being passed { 12, 1, 123, 778, 1234 }
		{
			// reset numDigits to zero
			auto numDigits = 0;

			while (nums[i] != 0)
			{
				nums[i] = nums[i] / 10;
				++numDigits;
			}
			if (numDigits % 2 == 0)
			{
				total++;
			}
		}
		return total;
	}
};




int main()
{
	vector<int> myVec = { 123, 331, 123, 778, 134 };
	Solution obj;

	cout << obj.findNumbers(myVec) << endl << endl;



	system("pause");
	return 0;
}