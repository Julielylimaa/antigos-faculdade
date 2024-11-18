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

float area_retangulo(ponto A, ponto B, ponto C){
	vetor AB;
	vetor BC;
	float area;
	AB = cria_vetor(A,B);
	BC = cria_vetor(B,C);
	area = fabs(vetorial(AB,BC));
	return area;
	
}
void infos_poligono(ponto v[],int n, float h)
{
	float area345;
	area345 = area_triangulo(v[3],v[4],v[5]);
	
	//area q sera eliminada
	float area012;
	area012 = area_triangulo(v[0], v[1],v[2]);
	
	float area0256;
	area0256 =area_retangulo(v[0],v[2],v[5]);
	
	
	float area = area0256 + area345 - area012;
	cout << "Area = " << fixed << setprecision(2)<< area<< endl;
	
	float volume;
	
	volume = area *h;
	cout << "Volume = " << fixed << setprecision(2)<<volume << endl;
	
	if (volume <=50)
		cout << "Bomba = A" << endl;
	else 
		if (volume <=100)
			cout << "Bomba = B" << endl;
		else 
			cout << "Bomba = C" << endl;
	
}

int main()
{
	ponto coordenadas[7];
	
	for (int i = 0; i<7; i++){
		cin >> coordenadas[i].x >>coordenadas[i].y;
	}
	float h;//altura
	
	cin >> h;
	
	
	infos_poligono(coordenadas, 7, h);

	
	return 0;
}