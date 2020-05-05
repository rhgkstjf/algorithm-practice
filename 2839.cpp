#include<iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	if (N >= 3 && N <= 5000)
	{
		int p = N / 5;
		if (N == 4 || N == 7)
			cout << "-1" << endl;
		else if (N % 5 == 0)
			cout << p << endl;
		else if (N % 5 == 1 || N % 5 == 3)
			cout << p + 1 << endl;
		else if (N % 5 == 2 || N % 5 == 4)
			cout << p + 2 << endl;
	}
	return 0;
}
