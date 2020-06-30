#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;


bool checkIfExist(vector<int>& arr) {

	unordered_set<int> st;

	for (int elem : arr)
	{
		if (st.find(elem * 2) != st.end())
		{
			return true;
		}
		if (elem % 2 == 0 && st.find(elem / 2) != st.end())
		{
			return true;
		}
		st.insert(elem);
	}

	return false;

}


int main()
{
	vector<int> myVec = { 10, 2, 5, 3 };
	bool retValue = false;

	retValue = checkIfExist(myVec);

	cout << retValue << endl << endl;



	system("pause");
	return 0;
}