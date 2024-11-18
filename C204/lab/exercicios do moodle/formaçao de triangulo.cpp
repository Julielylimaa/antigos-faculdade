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

float area_triangulo(ponto A, ponto B, ponto C)
{
	vetor AB;
	vetor AC;
	float area;
	AB = cria_vetor(A, B);
	AC = cria_vetor(A, C);
	area = fabs(vetorial(AB, AC)) / 2;
	return area;
}

int main()
{
	int n; //quantidade de conjunto de pontos

	ponto coordenadas[3];
	
	float area; 
	
	cin >> n;
	
	vetor AB, AC;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j<3; j++){
			//entrada das coordenadas 
			
			cin >> coordenadas[j].x >> coordenadas[j].y;
			
			
			
		}
		//criar vetores 
		AB = cria_vetor( coordenadas[0], coordenadas[1]);
		AC = cria_vetor(coordenadas[0], coordenadas[2]);
		
		//verificar se é um triangulo e calcular area
		
		area = area_triangulo(coordenadas[0],coordenadas[1],coordenadas[2]);
		if (area ==0)
			cout << "Nao formam triangulo" << endl;
		else 
			cout << fixed << setprecision(2) << area << endl;
		
		
	}
	return 0;
}