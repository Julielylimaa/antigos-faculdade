#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main (){
	float A, B, C; //dados representam lados e raio
	
	//entrada de dados
	cin >> A; 
	cin >> B;
	cin >> C;
	
	//identificando os calculos que serao feitos
	float area_triangulo; //base = A, altura = C
	float area_circulo; //raio = C
	float area_trapezio; //bases = A e B, altura = C
	float area_quadrado; //lado = B
	float area_retangulo; // lados = A e B
	
	//calculando as areas 
	area_triangulo = (A * C)/2.0;
	area_circulo = pow(C, 2) * 3.14159;
	area_trapezio = ((A+B)*C)/2.0;
	area_quadrado = pow(B,2);
	area_retangulo = A * B;
	
	//saida dos dados
	cout << fixed << setprecision(3);
	cout << "TRIANGULO: " << area_triangulo << endl;
	cout << "CIRCULO: " << area_circulo << endl;
	cout << "TRAPEZIO: " << area_trapezio << endl;
	cout << "QUADRADO: " << area_quadrado << endl;
	cout << "RETANGULO: " << area_retangulo << endl;
	
	return 0;
}