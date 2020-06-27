#include <iostream>
#include <vector>

using namespace std;

class Solution {

public:
	void duplicateZeros(vector<int>& arr)
	{
		int sz = arr.size(), i = sz - 1;

		while (i >= 0)
		{
			int val = arr[i];
			if (val)
			{

			}
			else
			{
				arr.insert(arr.begin() + i, 0);
				arr.pop_back();
			}
			--i;
		}

		for (int i = 0; i < arr.size(); i++)
		{
			cout << arr[i] << " ";
		}
	}

};



int main()
{

	vector<int> myVec = { 1, 0, 2, 3, 0, 4, 5, 0 };
	Solution obj;


	obj.duplicateZeros(myVec);

	cout << endl << endl;


	system("pause");
	return 0;
}