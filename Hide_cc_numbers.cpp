#include <iostream>
#include <string>

using namespace std;

std::string cardHide(std::string card) {
	std::string hiddenCard = "";



	for (int i = 0; i < card.length(); i++)
	{
		if (i < card.length() - 4)
			hiddenCard += "*";
		else
			hiddenCard += card[i];
	}

	cout << hiddenCard << endl;

	return hiddenCard;
}


int main()
{
	string myCc = "1234123456785678";

	cardHide(myCc);



	system("pause");
	return 0;
}