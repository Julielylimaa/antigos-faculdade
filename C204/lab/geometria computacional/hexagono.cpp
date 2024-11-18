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

float area_triangulo(ponto A,ponto B,ponto C)
{
	vetor AB;
	vetor AC;
	float area;
	AB = cria_vetor(A,B);
	AC = cria_vetor(A,C);
	area = fabs(vetorial(AB,AC)) / 2;
	return area;
}
float area_poligono(ponto v[],int n)
{
	float area = 0;
	for(int i = 0;i < n-2;i++)
	{
		area = area + area_triangulo(v[0],v[i+1],v[i+2]);
	}
	return area;
}

int main()
{
	ponto coordenadas[6];
	
	for (int i = 0; i<6; i++){
		cin >> coordenadas[i].x >>coordenadas[i].y;
	}
	
	
	float res;
	res = area_poligono(coordenadas, 6);
	
	cout << "Area do escudo: ";
	cout << fixed << setprecision(2)<< res << endl;
	
	return 0;
}