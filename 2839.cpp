#include<iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	if (N >= 3 && N <= 5000)
	{
		int num = -1;
		if ((N % 5) % 3 != 0 && ((N % 3 != 0) && (N % 5 != 0)) && (((N%5)+5)%3 != 0 && N > 10))
		{
			cout << num << endl;
		}
		else if (((N % 5) + 5) % 3 == 0 && N > 10)
		{
			int p = (N / 5) - 1;
			int q = ((N % 5) + 5) / 3;
			cout << p + q << endl;
		}
		else if ((N % 5) % 3 == 0) {
			int p = N / 5;
			int q = (N % 5) / 3;
			cout << p + q << endl;
		}
		else if (N % 5 == 0)
		{
			int p = N / 5;
			cout << p << endl;
		}
		else if (N % 3 == 0) {
			int p = N / 3;
			cout << p << endl;
		}
		else
			cout << num<<endl;
	}

	return 0;
}
