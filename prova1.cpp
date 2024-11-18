#include <iostream>


using namespace std;

int main (){
	int sexo; //variavel que definirá o sexo cadastrado
	char nome [50];
	int idade;
	float peso;
	
	do {
		cin >> sexo;	
	}while (sexo < 1 || sexo > 2);
	 // a variavel sexo deve valer 1 (homem) ou 2 (mulher)
	
	cin.ignore();
	cin.getline(nome, 50);
	
	do {
		cin >> idade;
	} while (idade < 0);
	
	do {
	 	 cin >> peso;
	} while (peso < 0);
	// idade e peso devem ser positivos 
	
	cout << "Paciente: " << nome << endl;
	
	if (sexo == 1) // paciente homem 
	{
		
		cout << "Sexo: Masculino" << endl;
		if (idade < 18 || idade > 65){
			cout << "Status: Nao doador" << endl;
		} // a idade minima é 18 e a maxima é 65
		
		else if (peso > 45){
			cout << "Status: Doador" << endl;
			}
			else // se o peso for menor que 45 kg o homem nao poderá doar
				cout << "Status: Nao doador" << endl;
	}
	else if (sexo == 2) // paciente mulher
	{
		
		cout << "Sexo: Feminino" << endl;
		if (idade < 18 || idade > 60){
			cout << "Status: Nao doador" << endl;
		}// a idade minima é 18 e a maxima é 60
		
		else if (peso > 50){
			cout << "Status: Doador" << endl;
			}
			else // se o peso for menor que 50kg a mulher nao poderá doar 
				cout << "Status: Nao doador" << endl;
		
	}
	
	return 0;
}