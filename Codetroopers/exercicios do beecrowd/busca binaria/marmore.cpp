#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int n, q;
	int caso = 1;
	while(cin >> n >> q && !(n == 0 && q == 0))
	{
		cout << "CASE# " << caso++ << ":" << endl;
		
		int v[n];
		for (int i = 0; i < n; i++)
			cin >> v[i];

		sort(v, v + n);

		while (q--) //até q valer 0
		{
			int x, pos = -1;
			cin >> x;
			int i = 1;
			int baixo = 0, alto = n - 1;

			while (!(alto < baixo))
			{
				int meio = (baixo + alto) / 2;

				if (v[meio] < x)
				{
					baixo = meio + 1;
				}

				if (v[meio] > x)
				{
					alto = meio - 1;
				}

				if (v[meio] == x)
				{
					pos = meio;
					break;
				}
			}

			
			
			if (pos == -1)
			{
				cout << x << " not found" << endl;
			}
			// se tiver encontrado precisa verificar se é a primeira pos q ele aparece
			else
			{

				while (v[pos - 1] == x  && pos > 0)
				{
					pos--;
				}
				cout << x << " found at " << pos + 1 << endl;
			}
		}
	}
	return 0;
}
