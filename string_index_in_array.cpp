/*
Find the Index
Create a function that takes an array and a string as arguments and return the index of the string.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int findIndex(vector<string> arr, string str) {
	int myIndex = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] != str)
			myIndex++;
		else
			return myIndex;
	}
}

int main()
{

	vector<string> myVec = { };
	string myString = "kitchen";
	int count = 4;
	string userInput = "";

	cout << "Enter four words with \"kitchen\" being one of them: (press enter after each)\n";
	
	for (int i = 0; i < count; i++)
	{
		getline(cin, userInput);
		myVec.push_back(userInput);
	}
	int num = findIndex(myVec, myString);

	cout << num << endl;


	system("pause");
	return 0;
}