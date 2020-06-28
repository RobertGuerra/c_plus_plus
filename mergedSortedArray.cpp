#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {

public:

	void mergedArray(vector<int>& nums1, int m, vector<int>& nums2, int n)
	{

		int first = m - 1;
		int second = n - 1;
		int length = nums1.size();

		if (m = 0)
		{
			first = 0;
		}

		for (int i = length - 1; i >= 0; i--)
		{
			if (second < 0 or first < 0)
			{
				break;
			}

			if (nums1[first] > nums2[second])
			{
				nums1[i] = nums1[first];
				first--;
			}
			else
			{
				nums1[i] = nums2[second];
				second--;
			}
		}

		for (int i = 0; i < nums1.size(); i++)
		{
			cout << nums1[i] << " ";
		}

	}

};


int main()
{
	vector<int> myVec1 = { 1, 2, 3, 0, 0, 0 };
	vector<int> myVec2 = { 2, 5, 6 };

	int m = 3, n = myVec2.size();

	Solution obj;

	obj.mergedArray(myVec1, m, myVec2, n);

	cout << endl << endl;

	system("pause");
	return 0;
}
