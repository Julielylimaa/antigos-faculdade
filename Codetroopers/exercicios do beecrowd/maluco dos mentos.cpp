#include <bits/stdc++.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
using namespace std;

int pd[1004][1004];
int v[1004];
int n;
//i = esq  j= dir
int solve(int i, int j)
{
	int p1, p2 = 2000;
	if (i > j)
		return 0;
	if (pd[i][j] != -1)
	{
		return pd[i][j] ;
	}
	if (v[i] == v[j])
	{
		p1 = solve(i + 1, j - 1) + 1;
	}
	else
	{
		p1 = solve(i + 1, j) + 1;
		p2  = solve(i, j - 1) + 1;
	}
	return pd[i][j] = min(p1, p2);
}
int main ()
{


	int c; //numero de casos
	cin >> c;
	rep(caso, 0, c)
	{
		memset(pd, -1, sizeof(pd)); //definir todas pos como -1

		cin >> n;
		rep(i, 0, n)
		{
			cin >> v[i];
		}

		cout <<"Caso #" <<caso+1 << ": " <<solve(0, n - 1) << endl;
	}
	return 0;
}
