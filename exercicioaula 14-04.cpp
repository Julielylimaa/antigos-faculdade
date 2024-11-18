#include <iostream>

using namespace std;

int main(){
	int matricula;
	float PV1, PV2, media;
	
	cin >> matricula;
	
	while (matricula >=1){
		cin >> PV1;
		
		while (PV1 < 0 || PV1 > 100){
			
			cout << "Digite PV1 novamente: ";
			cin >> PV1;
			
		}
		cin >> PV2;
		
		while (PV2 < 0 || PV2 > 100){
			
			cout << "Digite PV2 novamente: ";
			cin >> PV2;
			
		}
		
		media = (PV1 + PV2)/ 2.0;
		
		cout << "Media: " << media << endl;
		
		if (media >= 60)
			cout << "APROVADO" << endl;
		
		else if (media <30)
			cout << "REPROVADO" << endl;
		
		else if (media >=30 && media < 60)
			cout << "EXAME" << endl;
		
		cin >> matricula;
		
		
	}
	
	
	return 0;
}