/*
Check if a String Contains only Identical Characters:
Write a function that returns true if all characters in a string are identical and false otherwise.
*/

#include <iostream>
#include <string>

using namespace std;


bool isIdentical(std::string str) {
	int strLength = str.length();
	for (int i = 1; i < strLength; i++)
		if (str[i] != str[0])
			return false;
	return true;
}

int main()
{

	char answer = ' ';
	string word = "";
	
	do {
		cout << "Please enter a word: ";
		getline(cin, word);
		isIdentical(word);
		cout << "Run again?  y/n: ";

	} while (answer == 'y' || answer == 'Y');

	cin.ignore();


	system("pause");
	return 0;
}