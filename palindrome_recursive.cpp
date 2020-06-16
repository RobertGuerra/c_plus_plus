/*
Recursion: String Palindromes
Write a function that recursively determines if a string is a palindrome.
*/
#include <iostream>
#include <string>

using namespace std;

string isPalindrome(std::string str) {
	int myStr = str.length() - 1;
	if (str == "")
		return "";
	else if (str[0] == str[myStr])
	{
		isPalindrome(str.substr(1, myStr - 1));
		return "Yes!";
	}
	return "not a Palindrome!";
}

int main()
{
	string userWord = "";

	cout << "Enter a word: ";
	cin >> userWord;

	cout << "is " << userWord << " a Palindrome?\n" << isPalindrome(userWord);

	cout << endl << endl;


	system("pause");
	return 0;
}