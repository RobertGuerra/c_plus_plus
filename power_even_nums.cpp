#include <iostream>
#include <cmath>
using namespace std;

int sumEvenintegers(int n) {
	int base = 2, total = 0;
	while (n--) {
		total += (pow(base, 2));
		base += 2;
	}

	return total;
}

int main() {
	//code

	int base = 2, T, total = 0;
	cin >> T;

	while (T--)
	{
		int n = 0;
		cin >> n;
		total = sumEvenintegers(n);
		cout << total << endl;
	}
	
	system("pause");
	return 0;
}
