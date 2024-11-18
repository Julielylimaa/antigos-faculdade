#include <iostream>
#include <iomanip>

using namespace std;


int main (){
	
	int mph; // milhas por hr (entre 0 -190)
	float kmh; //km por hr 
	
	do{
		cout << "Digite a velocidade em mph (0 - 190): "; 
		cin >> mph;
	}
	while (mph < 0 || mph >190);
	//se a entrada nao estiver entre 0 e 190 rodará novamente
	

	kmh = mph * 1.60934; //1 milha corresponde a 1,60934 km
	
	cout << fixed << setprecision (1);
	cout << "Velocidade em Km/h: " << kmh << endl;
	
	
	return 0;
}