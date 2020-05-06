#include<iostream>
using namespace std;

int main()
{
	int T,H,W,N;
	cin >> T;
	int *n = (int*)malloc(sizeof(int)*T);

	for (int k = 0; k < T; k++)
	{
		cin >> H >> W >> N;
		if (H >= 1 && W >= 1 && W <= 99 && N >= 1 && N <= H * W)
		{
			int i = N % H;
			int j = N / H;
			if (N % H == 0)
				*(n + k) = i * 100 + ((j / W) * 10) + j;
			else
				*(n + k) = i * 100 + ((j / W) * 10) + ((j + 1));
		}
	}
	for (int k = 0; k < T; k++)
		cout << *(n + k) << endl;

	return 0;
}
