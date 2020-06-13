/*Recursion: Count Vowels
Write a function that recursively returns the number of vowels in a string
*/
#include <iostream>
#include <string>

using namespace std;

int countVowels(std::string str) {
	int myStr = str.length() - 1;
	if (str == "")
		return 0;
	else
	{
		if (str[myStr] == 'a' || str[myStr] == 'e' || str[myStr] == 'i' ||
			str[myStr] == 'o' || str[myStr] == 'u')
			return 1 + countVowels(str.substr(0, myStr));
	}
	return countVowels(str.substr(0, myStr));
}

int main()
{

	int numVowels = 0;
	string userString = "";

	cout << "Enter a word or sentence and I will tell you\n"
		<< "how many vowels there are: ";

	cin.ignore();

	getline(cin, userString);

	numVowels = countVowels(userString);

	cout << endl << endl;

	cout << "Your input has " << numVowels << " vowels!";

	cout << endl << endl;



	system("pause");
	return 0;
}