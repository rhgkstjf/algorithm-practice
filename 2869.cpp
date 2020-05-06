#include<iostream>
using namespace std;

int main()
{
	int A,B,V;
	cin >> A >> B >> V;
	if (B >= 1 && B < A && A <= V && V <= 1000000000)
	{
		int i = (V - B) / (A - B);
		if ((V - B) % (A - B) == 0)
			cout << i << endl;
		else
			cout << i+1 << endl;
	}

	return 0;
}
