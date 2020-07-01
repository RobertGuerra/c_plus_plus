#include <iostream>
#include <vector>

using namespace std;

bool validMountainArray(vector<int>& A) {
	int n = A.size();
	int i = 0;

	// walk up
	while (i + 1 < n && A[i] < A[i + 1])
	{
		i++;
	}

	// peak can't be 1st or last
	if (i == 0 || i == n - 1)
	{
		return false;
	}

	// walk down
	while (i + 1 < n && A[i] > A[i + 1])
	{
		i++;
	}
	return i == n - 1;
}



int main()
{
	bool first, second, third;
	vector<int> vec1 = { 1, 2, 6, 8, 4, 2, 1 };
	vector<int> vec2 = { 1, 3, 4, 4, 5, 3, 2 };
	vector<int> vec3 = { 0 };

	first = validMountainArray(vec1);
	cout << "first vector: " << first << "\n";

	
	second = validMountainArray(vec2);
	cout << "second vector: " << second << "\n";

	third = validMountainArray(vec3);
	cout << "third vector: " << third << "\n";

	cout << endl << endl;

	system("pause");
	return 0;
}