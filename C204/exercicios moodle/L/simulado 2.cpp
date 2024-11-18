#include <iostream>
#include <cmath> // operacoes matematicas
#include <algorithm> // sort
#include <list> // para a pilha 

using namespace std;

struct ponto{
	float x;
	float y; 	
};
typedef ponto vetor;

struct reta{
	ponto A;
	ponto B;   	
};
typedef reta segmento;

vetor cria_vetor(ponto A,ponto B){
	vetor AB;
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	return AB;
}
float vetorial(vetor A,vetor B)
{
	float v;
	v = A.x*B.y - A.y*B.x;
	return v;
}
/*
Posicao de C em relacao ao segmento AB
1 -> esquerda
-1 -> direita
0 -> colinear
*/
int sentido(ponto A,ponto B, ponto C){
	vetor AB;
	vetor AC;
	float vet;
	AB = cria_vetor(A,B);
	AC = cria_vetor(A,C);
	vet = vetorial(AB,AC);
	if(vet > 0)
		return 1;
	else if(vet < 0)
		return -1;
	else
		return 0;
}

/*
Verifica se o ponto P esta dentro do triangulo ABC
1 -> dentro
-1 -> fora
0 -> na linha
*/
int dentro_triangulo(ponto A, ponto B, ponto C, ponto P)
{
	int s1,s2,s3;
	s1 = sentido(A,B,P);
	s2 = sentido(B,C,P);
	s3 = sentido(C,A,P);
	if(s1 == s2 && s2 == s3)
		return 1; 
	else if(s1*s3 == -1 || s1*s2 == -1 || s2*s3 == -1)
		return -1;
	else
		return 0;
}

int main (){
	ponto H; //coordenadas heroi
	ponto V; //coordenadas vilao
	ponto p1,p2; //coordenadas pontos
	
	cin >> H.x>>H.y;
	cin >> V.x>>V.y;
	cin >>p1.x>>p1.y>>p2.x>>p2.y;
	
	int aux;
	
	aux = dentro_triangulo(H,p1,p2,V);
	
	if (aux ==1 || aux ==0){
		cout << "Vilao derrotado" << endl;
	}
	else
	{
		cout << "Chame reforcos" << endl;
	}
	
	//estar a direita do ponto 1 e a esquerda do ponto 2
	
		
	
	
	return 0;
}