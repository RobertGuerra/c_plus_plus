#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {
		auto result = 0, max1s = 0;
		for (auto n : nums) {
			if (n == 1) {
				result++;
				max1s = max(max1s, result);
			}
			else {
				result = 0;
			}
		}
		return max1s;
	}
};

int main()
{
	vector<int> myvec = { 1,1,0,1,1,1 };
	Solution obj;
	cout << obj.findMaxConsecutiveOnes(myvec) << endl << endl;



	system("pause");
	return 0;
}
