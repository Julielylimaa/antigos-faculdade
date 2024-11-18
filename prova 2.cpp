#include <iostream>
#include <iomanip> 

using namespace std;

int main (){
	int cod; // variavel que dirá a especie do animal ou o comando para sair
	float peso; // peso do animal cadastrado
	float valor; // valor do serviço do animal cadastrado
	
	//variaveis para salvar a quantidade de cada especie:
	int cachorro = 0; 
	int gato = 0; 
	int total = 0;
	float pcachorro, pgato; //porcentagem cachorro e gato
	
	//calcular media peso e lucro total:
	float pesototal =0;
	float valortotal = 0;
	float mediapeso;
	
	
	
	cin >> cod;
	
	while (cod != -1){
		cin >> peso;
		cin >> valor;
		
		total ++; //total de animais cadastrados
		pesototal += peso;
		valortotal += valor;
		
		if (cod == 1){
			gato ++; // total de gatos cadastrados
		}
		else if (cod == 2){
			cachorro ++; // total de cachorros cadastrados
		}
		cin >> cod;
		
	}
	
	pgato = (100 * gato)/(total * 1.0);
	pcachorro = (100 * cachorro)/(total * 1.0);
	
	mediapeso = pesototal / (total * 1.0);
	
	cout << fixed << setprecision (2);
	cout << "Gatos: " << pgato << " %" << endl;
	cout << "Cachorros: " << pcachorro << " %" << endl;
	cout << "Media dos pesos: " << mediapeso << endl;
	cout << "Lucro total: " << valortotal << " Reais" << endl;
	
	
	
	return 0;
}