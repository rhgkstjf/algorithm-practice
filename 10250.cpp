#include<iostream>
using namespace std;

int main()
{
	int T,H,W,N;
	cin >> T;

	for (int k = 0; k < T; k++)
	{
		cin >> H >> W >> N;
		if (H >= 1 && W >= 1 && W <= 99 && N >= 1 && N <= H * W)
		{
			int i = N % H;
			int j = N / H;
			if (i > 0)
				j++;
			else
				i = H;
			cout << (i * 100) + j << endl;
		}
	}

	return 0;
}
