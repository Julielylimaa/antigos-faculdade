#include <bits/stdc++.h>

using namespace std;

struct ponto
{
	float x;
	float y; 	
};
typedef ponto vetor;

struct reta
{
	ponto A;
	ponto B;   	
};
typedef reta segmento;

vetor cria_vetor(ponto A,ponto B)
{
	vetor AB;
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	return AB;
}

float distancia_Vetor(vetor A){
	
	float comprimento_Vetor;
	float x;
	x = pow(A.x, 2) + pow(A.y, 2);
	comprimento_Vetor = sqrt(x);
	return comprimento_Vetor;
	
}

int main(){
	
	ponto carro_Inicial;
	int num_passageiros;
	vetor vetores_carro_Passageiro;
	
	cout << "Entre com as coordenadas X e Y do carro: " << endl;
	cin >> carro_Inicial.x >> carro_Inicial.y;
	
	cout << "Entre com o numero de passageiros: " << endl;
	cin >> num_passageiros;
	
	ponto coordenadas_Passageiro[num_passageiros];
	float comprimento_dos_Vetores [num_passageiros];
	
	
	for(int i =0; i < num_passageiros && num_passageiros > 0 ; i++){
		cout << "Entre com as coordenadas do passageiro: " << endl;
		cin >> coordenadas_Passageiro[i].x >> coordenadas_Passageiro[i].y;
		vetores_carro_Passageiro = cria_vetor(carro_Inicial,coordenadas_Passageiro[i]);
		comprimento_dos_Vetores[i] = distancia_Vetor(vetores_carro_Passageiro);
		cout << "Distancia entre o carro e o passageiro " << i << " e: " << setprecision(3) << comprimento_dos_Vetores[i] << endl;
		
	}
	
	
	
	
	
	return 0;
}