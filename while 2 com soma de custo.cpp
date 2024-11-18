#include <iostream>


using namespace std;

int main (){
	int N;
	int soma;
	
	soma = 0; 
	cin >> N;
	
	while (N != -1){
		soma += N;
		cin >> N;
	}
	cout << soma << endl;
	return 0;
}

//calculo de valor (nao completo):
//soma = 0; ---- vale 1 (apenas atribuiçao)
	
	//while (N != -1) ----- 1 + 1 = 2 * x + 1 (depende de quantas vezes vai entrar um numero
	//{
		//soma += N; ---- soma = soma + N ---logo: 1 + 1 + 1 + 1 = 4 * x vezes
		//cin >> N; --- 1 + 1 = 2 * x
	//}
// total = 1 + 2x + 2 + 4x + 2x
// total = 8x + 3 

