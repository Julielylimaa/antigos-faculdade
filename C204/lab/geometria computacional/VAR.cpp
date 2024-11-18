#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct ponto
{
	float x;
	float y;
};
typedef ponto vetor;

vetor cria_vetor(ponto A, ponto B)
{
	vetor AB;
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	return AB;
}

float vetorial(vetor A, vetor B)
{
	float v;
	v = A.x * B.y - A.y * B.x;
	return v;
}

float escalar(vetor A, vetor B)
{
	float e;
	e = A.x * B.x + A.y * B.y;
	return e;
}

int sentido(ponto A,ponto B, ponto C)
{
	vetor AB;
	vetor AC;
	float vet;
	AB = cria_vetor(A,B);
	AC = cria_vetor(A,C);
	vet = vetorial(AB,AC);
	if(vet > 0)
		return 1;//esquerda
	else if(vet < 0)
		return -1;//direita
	else
		return 0;//colinear
}

int main()
{
	ponto coordenadas[3];
	
	for (int i = 0; i<3; i++){
		cin >> coordenadas[i].x >>coordenadas[i].y;
	}
	
	int res;
	res = sentido(coordenadas[0], coordenadas[1], coordenadas[2]);
	
	if (res == 1){
		cout <<"GOL!" << endl;
	}
	else 
		cout << "NAO GOL!"<< endl;
	return 0;
}