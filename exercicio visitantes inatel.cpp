#include <iostream>
#include <cstring>
#include <iomanip>


using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	
	
	int  i = 1, nummg = 0, numtotal = 0, numoutros;//i = flag 
	char nome[50], cpf[12];
	char uf [3];
	float percMG, percoutros;// percentual de mg e de outros estados
	
	do
	{
		
		cout << "Cadastro de visitante:" << endl;
		cout << "nome: ";
		cin.getline(nome,50);
		cout << "CPF: ";
		cin >> cpf;
		cout << "Estado de origem: ";
		cin >> uf; 
		
		
		numtotal++; // soma quantos visitantes foram cadastrados
		
		if (strcmp(uf, "MG") == 0)//retorna zero se forem iguais
		{
			nummg++; // soma quantos visitantes sao de mg
		}
		
		do {
			cout << "Novo cadastro? (1-sim 2-não)" << endl;
			cin >> i;
		} while (i < 0 || i >2);
		
		
		//para executar novamente o getline(nome)
		
	}
	while (i != 2); // enquanto i for diferente de 2 a condição sera executada
	

	percMG = (nummg *100)/ (numtotal * 1.0);

	numoutros = numtotal - nummg; // visitantes de outros estados
	
	percoutros = (numoutros * 100)/ (numtotal * 1.0);
	
	cout << fixed << setprecision(2);
	cout << "\nVisitantes de MG: " << percMG << " %" << endl;
	cout << "Visitantes de outros estados: " << percoutros<< " %" << endl;
	
	
	return 0;
}