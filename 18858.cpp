#include<iostream>
#include<vector>
using namespace std;

int num = 0;

void DFS(vector<int> V,int m, int n, int init);
int judge(vector<int> V,int n);
void print_arr(vector<int> V,int n);
int main()
{
	int n,m;
	
	scanf("%d %d", &n, &m);
	if (n >= 1 && n <= 1000)
	{
		if (m >= 1 && m <= 100) {
			vector<int> V(n);
			DFS(V,m, n, 0);
			printf("%d\n",num % 998244353);
		}
	}

	return 0;
}

void DFS(vector<int> V,int m, int n, int init)
{
	if (n == init)
	{
		num += judge(V,init);
		
		return;
	}
	for (int i = 0; i < m; i++)
	{
		V[init] = i;
		DFS(V, m, n, init + 1);
	}
}
int judge(vector<int> V,int n)
{
	if (n < 3)
		return 1;

	else
	{
		int p = 0;
		for (int i = 0; i <= n-3; i++)
		{
			if (!(V[i]< V[i + 1] && V[i + 1]> V[i + 2]))
			{
				p++;
			}
		}
		return p;
	}
}

void print_arr(vector<int> V,int n)
{
	for (int k : V)
		cout << k << " ";
	cout << endl;
}
