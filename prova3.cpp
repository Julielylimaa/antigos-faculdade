#include <iostream>
#include <iomanip>


using namespace std;

int main (){
	int N; // numero de funcionarios que o programa deve ler 
	int i; // parametro do for
	char nome [50];
	float salario;
	
	
	int intervalosalario = 0; // soma quantos recebem no intervalo [2300, 5600]
	
	// para cacular a media:
	float somasalario = 0;
	float mediasalario;
	
	float maiorsalario = 0; //para salvar o maior salario
	
	
	cin >> N;
	cin.ignore();
	
	for (i = 1; i <= N; i++){
		
		
		cin.getline (nome, 50);
		cin >> salario;	
		
		if (salario > maiorsalario)
			maiorsalario = salario;
		
		
		if (salario >= 2300 && salario <= 5600)
			intervalosalario ++;
		
		somasalario += salario;
		
		cin.ignore();
		
	}
	
	
	mediasalario = somasalario / (N * 1.0);
	
	
	cout << "Maior salario: ";
	cout << fixed << setprecision(2) << maiorsalario << endl;
	cout << "Quantidade de salarios dentro do intervalo: ";
	cout << intervalosalario << endl;
	cout << "Media dos salarios: " ;
	cout << fixed << setprecision (2) << mediasalario << endl;
	
	
	
	
	return 0;
}