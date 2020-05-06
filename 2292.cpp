#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	if (N >= 1 && N <= 1000000000)
	{
		int i = 1;
		int p = 1;

		for (i = 1;i <= N; i++)
		{
			p += (i - 1) * 6;
			if (N <= p) break;
		}
		cout << i << endl;
	}

	return 0;
}
