#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int heightChecker(vector<int>& heights) {

	// Input:   heights = [5, 1, 2, 3, 4]
	// Target result:     [1, 2, 3, 4, 5]   =  5 students have to move
	vector<int> newVec;
	int counter = 0;

	for (int i = 0; i < heights.size(); i++)
	{
		newVec.push_back(heights[i]);
	}

	sort(heights.begin(), heights.end());

	for (int i = 0; i < heights.size(); i++)
	{
		if (heights[i] != newVec[i])
		{
			counter++;
		}
	}

	return counter;
}



int main()
{
	// Input:   heights = [5,1,2,3,4]
	// Output : 5

	vector<int> myVec = { 5, 1, 2, 3, 4 };
	int retValue;

	retValue = heightChecker(myVec);

	int i = 0;

	cout << "The number of Students that had to move were: " << retValue;

	cout << endl << endl;


	system("pause");
	return 0;
}