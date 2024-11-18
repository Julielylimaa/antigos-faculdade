#include <iostream>

using namespace std;


int main (){
	int n, m;
	int x;//quantas peças jogador vai retirar!
	int y;
	int i; //parametro do computador para o calculo
	
	cout << "Bem vindo ao jogo NIM! Escolha: " << endl;
	cout << "Quantas peças?: ";
	cin >> n;
	cout << "Limite de peças por jogada? ";
	cin >> m;
	
	if (n % (m+1)== 0){
		cout << "Você começa!" << endl;
		y=0;	
	}
	else {
		cout << "Computador começa!" << endl;
		y = 1;
	}
	
	switch(y){
		case 0:
			cin >> x;
			n = n - x;
			break;
		case 1:
			for (i=m; i>= 1; i--){
				if ((n - i)% (m+1) == 0){
					n = n - i;
					cout << n << endl;
				}
				else {
					n = n - m;
					cout << n << endl;
				}
			}
			
	}
	
	
	
	
	
	return 0;
}