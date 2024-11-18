#include <iostream>

using namespace std;

struct dados{
	char Nome[50];
	char aniversario[10];
	char sexo[2];	
	
};

int main (){
	dados d1;
	
	cin.getline (d1.Nome, 50);
	cin.getline(d1.aniversario, 10) ;
	cin >> d1.sexo;
	
	cout << d1.Nome << endl << d1.aniversario << endl << d1.sexo << endl;
	
	
	
	return 0;
}