#include <iostream>

using namespace std;

int main (){
	int N, i, idade, maior21 = 0;
	cout <<"Numero de pessoas: ";
	cin >> N;
	
	for (i=1; i <= N; i++){
		cin >> idade;
		
		if (idade > 21)
			maior21 ++;
	}	
	
	cout << maior21 << " idade(s) maior(es) que 21 anos" << endl;
	return 0;
}