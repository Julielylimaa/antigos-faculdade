#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	setlocale (LC_ALL, "Portuguese");

	int N, x, sim = 0, nao = 0, naosei =0, i; //i: parametro do for
	float p1, p2, p3; //p1: % de sim; p2: % de nao; p3: % de nao sei;
	
		
	cin >> N; //numero de pessoas entrevistadas
	
	for (i = 1; i <= N; i++){
		cin >> x;
		
		switch (x)//para calcular a quantidade de cada opção
		{
			case 1: //1 é sim
				sim += 1;
				break;
			case 2: //2 é não
				nao += 1;
				break;
			case 3: //3 é não sei
				naosei += 1;
				break;
		}
		p1 = (sim * 100.0)/ N;
		p2 = (nao * 100.0)/ N;
		p3 = (naosei * 100.0)/N;
	}
	
	
	cout << fixed << setprecision(2);
	cout << "opção 1: " << sim << " porcentagem: " << p1 << " %" << endl;
	cout << "opção 2: " << nao << " porcentagem: " << p2 << " %" << endl;
	cout << "opção 3: " << naosei << " porcentagem: " << p3 << " %" << endl;
	
	return 0;
}