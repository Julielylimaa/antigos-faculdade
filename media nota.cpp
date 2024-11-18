#include <iostream>
using namespace std;

int main()
{
	int PV1;
	int PV2;
	cin >> PV1 >> PV2;
	
	int MF;
	MF = (PV1 + PV2)/ 2;
	
	if (MF >= 50)
	{
		cout << "APROVADO";
	}
	else
	{
		cout << "REPROVADO"; 
	}
		 
	return 0;
}