#include <iostream>
#include <iomanip>
using namespace std;



int main (){
	float matriz[12][12];
	
	int c; //coluna que sera utilizada
	cin >> c;
	
	
	char caso; // S= soma M = media
	
	
	cin >> caso;
	
	for(int i =0; i <12; i++){
		for (int j = 0; j<12; j++){
			cin >> matriz[i][j];
		}
	}
	
	float soma =0;
	float media;
	
	for (int i = 0; i<12; i++){
		soma += matriz[i][c];
	}
	
	if (caso == 'S'){
		cout << fixed << setprecision(1) << soma << endl;
	}
	else 
		if (caso == 'M'){
			media = soma/ (12.0);
			cout << fixed << setprecision(1)<< media <<endl;
		}
	
	return 0;
}