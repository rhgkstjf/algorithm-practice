#include<iostream>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if ((A > 0 && A <= 2100000000) && (B > 0 && B <= 2100000000) && (C > 0 && C <= 2100000000))
	{
		int num = 1;
		if (B >= C)
			num = -1;
		else {
			num = A / (C - B) + 1;
		}
		cout << num << endl;
	}
	
	return 0;
}
