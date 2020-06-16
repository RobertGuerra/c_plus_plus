#include <iostream>
#include <string>

using namespace std;


string reverse(string str) {
	if (str == "" || str.length() == 1)
		return str;
	else
	{
		string last(1, str[str.length() - 1]);
		string reversed = reverse(str.substr(0, str.length() - 1));
		return last + reversed;
	}
}

int main()
{
	string myString = "";
	cout << "Enter a string to reverse: " << endl;

	getline(cin, myString);

	cout << "Here is your string reversed: " << reverse(myString);
	cout << endl;






	system("pause");
	return 0;
}