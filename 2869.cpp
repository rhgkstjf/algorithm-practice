#include<iostream>
using namespace std;

int main()
{
	int A,B,V;
	cin >> A >> B >> V;
	if (B >= 1 && B < A && A <= V && V <= 1000000000)
	{
		int i;
		int p = 0;
		for (i = 1;V-p > A; i++)
		{
			p += A - B;
		}
		cout << i << endl;
	}

	return 0;
}
