#include <iostream>
#include <iomanip>


using namespace std;


int main (){
	float x, y, resto1, resto2, resto3;  //x é salario e y é imposto8%, z é 18% e w é 28%
	
	cin >> x;
	
	
	cout << fixed<< setprecision(2);
	
	if (x <= 2000){
		cout << "Isento" << endl;
	}
	else if (x > 2000 && x <= 3000)// imposto de 8%
	{ 
		y = (x - 2000) * 0.08;
		cout << "R$ " << y << endl;
	}
	else if (x > 3000 && x <= 4500)// imposto de 18%
	{ 
		resto1 = (x - 3000); //resto1 vai separar a parte q pega 18%
		resto2 = x -  (resto1 + 2000); // resto 2 separa a parte que pega 8%
		y = (resto1 * 0.18) + (resto2 * 0.08);
		cout << "R$ " << y << endl;
		
	} 
	else if (x > 4500) // imposto de 28%
	{
		resto1 = x - 4500; //parte q pega 28%
		resto2 = x - (resto1 + 3000); //parte q pega 18%
		resto3 = x - (resto1 + resto2 + 2000); // parte q pega 8%
		
		y = (resto1 * 0.28) + (resto2 * 0.18) + (resto3 * 0.08);
		
		cout << "R$ " << y << endl;
		
		
	}
	
	
	
	
	return 0;
}