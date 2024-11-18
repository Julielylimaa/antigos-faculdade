#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	float N, menor, marc, div = 0.0, media = 0;// N: altura (flag = -1)
	int S, somah = 0; // sexo (1= masculino ; 2= feminino)
	
	cin >> N;
	menor = N;
	
	while (N != (-1)){
		cin >> S;
		marc = 0;
		
		if (S == 1)
			somah++; //soma de homens
		if (N < menor)
			menor = N;
		
		if (S == 2){
			marc = N;
			div++;
		}
		media += marc;
		
		cin >> N;
	}
 
    media = media/ div;
	
	cout << somah << " Hom. " << endl;
	cout << fixed << setprecision(2);
	cout << "Menor altura: " << menor << endl;
	cout << "Média: " << media << endl;
	
	return 0;
}