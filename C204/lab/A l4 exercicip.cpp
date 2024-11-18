#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm> // sort
#include <list> // para a pilha 
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
int sentido(ponto A,ponto B, ponto C)
{
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

// funcao para comparar dois pontos durante a ordenacao
bool cmp(ponto a,ponto b)
{
	// atan2((a.y - 0),(a.x - 0)) -> arco tangente[(a.y - 0)/(a.x - 0)]
	float angA = atan2(a.y,a.x);  
	float angB = atan2(b.y,b.x);
	if(angA == angB) // se os angulos forem iguais, desempata pelo mais longe
	{
		float distA = sqrt(pow(a.x,2)+pow(a.y,2)); // raiz[(a.x - 0)^2 + (a.y - 0)^2]
		float distB = sqrt(pow(b.x,2)+pow(b.y,2)); // raiz[(b.x - 0)^2 + (b.y - 0)^2]
		return distA > distB; // primeiro o de maior distancia
	}
	else
		return angA < angB; // primeiro o de menor angulo
}
// funcao para ordenar os pontos de acordo com o angulo formado com a horizontal
void ordena_pelo_angulo(ponto p[],int n)
{
	ponto pivot; // ser? o ponto mais abaixo
	int pos_pivot;
	// encontro o ponto mais abaixo para ser o pivot
	pivot = p[0];
	pos_pivot = 0;
	for(int i = 1;i < n;i++)
	{
		if(p[i].y < pivot.y)
		{
			pivot = p[i];
			pos_pivot = i;
		}
		else if(p[i].y == pivot.y && p[i].x < pivot.x)
		{
			pivot = p[i];
			pos_pivot = i;
		}
	}
	
	// coloca o pivot na posicao 0 do vetor
	p[pos_pivot]= p[0];
	p[0] = pivot;
	
	// desloca o pivot para (0,0), e os demais pontos em relacao ao pivot
	for(int i = 0;i < n; i++)
	{
		p[i].x -= pivot.x;
		p[i].y -= pivot.y;
	}
	
	// ordenacao
	sort(p + 1, p + n,cmp);
	
	// desloca os pontos de volta a posicao original
	for(int i = 0;i < n;i++)
	{
		p[i].x += pivot.x;
		p[i].y += pivot.y;
	}
}

// penultimo da pilha 
ponto next_to_top(list <ponto> pilha)
{
	pilha.pop_back();
	return pilha.back();
}

// Encontra o fecho convexo de um conjunto de pontos
// retorna uma lista com os pontos que compoem o fecho convexo
list <ponto> Graham_scan(ponto p[],int n)
{
	list <ponto> pilha;
	
	ordena_pelo_angulo(p,n);
	
	pilha.push_back(p[0]);
	pilha.push_back(p[1]);
	pilha.push_back(p[2]);
	int i = 3;
	while(i < n)
	{
		// curva a esquerda, adiciona
		if(sentido(next_to_top(pilha),pilha.back(),p[i]) == 1)
		{
			pilha.push_back(p[i]);
			i++;
		}
		// curva a direita (ou mesma linha), remove
		else
			pilha.pop_back();
	}
	return pilha;
}

float comprimento(ponto v[],int n, float &tam)
{
	float x;
	vetor A;
	for (int i = 1; i < n; i++){
		A = cria_vetor(v[i-1], v[i]);
		x = pow(A.x, 2) + pow(A.y, 2);
		tam += sqrt(x);
	}
	
	A = cria_vetor(v[n-1], v[0]);
	x = pow(A.x, 2) + pow(A.y, 2);
	tam += sqrt(x);
	return tam;
}

int main (){
	int n;//numero curvas
	cin >> n;
	list <ponto> pilha;
	
	ponto coordenadas[n];//coordenadas da estrela 
	for(int i=0; i<n; i++){
		cin >> coordenadas[i].x >> coordenadas[i].y;
		
	}
	pilha = Graham_scan(coordenadas, n);
	
	int x = 0;
	ponto aux[100];
	
	while (!pilha.empty()){
		aux[x]= *pilha.begin();
		pilha.pop_front();
		x++;
	}
	cout << endl;
	
	float tam = 0;
	
	cout <<"Comprimento total = " << fixed << setprecision(3) << comprimento(aux,x,tam)<<" m" << endl;
	
	
	return 0;
}