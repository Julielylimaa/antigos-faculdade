#include <iostream>

using namespace std;

void CONVERTE (int &H, int &M, int &S){
	
	
	
	H = H / 3600; 
	//vai representar as horas que tem em N segundos
	
	M = (M % 3600)/ 60; 
	//vai representar quantos minutos sobraram dps de 
	//retirarmos as horas de N;
	
	S = (S % 3600)% 60;
	//vai representar os segundos que sobraram
	
	
	return;
}


int main (){
	int N, H, M, S;
	
	
	
	cout << "Quantidade em segundos: ";
	cin >> N;
	
	H = N;
	M = N;
	S = N;
	
	CONVERTE(H, M, S);
	
	cout << H << "h " << M << "min "<<S << "seg" << endl;
	
	return 0;
}

