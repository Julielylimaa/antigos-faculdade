#include <iostream>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	char nome [50];
	int nascimento, anotrabalho;// ano de nascimento e ano de ingresso na empresa
	int idade;
	int anost; // anos trabalhados
	
	cout << "Digite o nome: ";
	cin.getline(nome,50);
	
	do{
		cout << "Digite o ano de nascimento (1940 a 2020): ";
		cin >> nascimento;
	}while (nascimento < 1940 || nascimento > 2020); // deve ser maior ou igual 1940
	
	
	do{
		cout << "Digite o ano de entrada na empresa (1970 a 2020): ";
		cin >> anotrabalho; 
	}while (anotrabalho < 1970 || anotrabalho > 2020 || anotrabalho < nascimento); 
	// deve ser maior ou igual 1970 e maior q o ano de nascimento
	
	
	
	idade = 2020 - nascimento;
	anost = 2020 - anotrabalho;
	
	if (idade >= 65){
		cout << "O funcionário está qualificado..." << endl;
	}
	else if (anost >= 30){
		cout << "O funcionário está qualificado..." << endl;	
	}
		
	else if (idade >= 60 && anost >= 25){
		cout << "O funcionário está qualificado..." << endl;
	}
	else
		cout << "O funcionário ainda não está qualificado..." << endl;
	
	return 0;
}