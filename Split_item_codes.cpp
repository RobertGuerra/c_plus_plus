#include <iostream>
#include <string>
#include <vector>

using namespace std;


std::vector<std::string> splitCode(std::string item) {
	std::string letters = "";
	std::string numbers = "";

	for (auto c : item)
	{
		if (isalpha(c))
			letters += c;
		else
			numbers += c;
	}

	std::vector<std::string> myFuncVec = { letters, numbers };
	int i = 0;
	cout << "{ ";
	for (i; i < myFuncVec.size() - 1; i++)
	{
		std::cout << myFuncVec[i] << ", ";
	}
	std::cout << myFuncVec[i];
	cout << " }";
	return myFuncVec;
}





int main()
{
	std::string testString = "TEWA8392";
	std::string testString2 = "MCI5589";

	cout << "Testing String 1:\n";
	splitCode(testString);
	std::cout << std::endl << std::endl;

	cout << "Testing String 2:\n";
	splitCode(testString2);

	std::cout << std::endl;

	system("pause");
	return 0;
}