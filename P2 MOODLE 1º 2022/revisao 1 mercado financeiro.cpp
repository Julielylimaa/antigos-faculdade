#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	float C; //variavel corresponde ao capital
	float i; //taxa de juros 
	int t; // tempo de aplicação
	float M; // Montante produzido 
	float lucro; //Montante - Capital
	
	//Entrada de dados
	cin >> C >> i >> t; 
	
	//Calculando o montante
	i = i /100.0;
	M =C * pow((1+ i), t);
	
	//Calculando o lucro 
	lucro = M - C;
	
	cout << fixed << setprecision(2);
	cout << "LUCRO = " << lucro << endl;
	
	return 0;
}