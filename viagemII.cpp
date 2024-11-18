#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	
	int x, y, c;// x quantidade de notas, y valor, c quantidade chocolate
	float p, s, valorc;// preço chocolate e sobra do dinheiro
	
	cin >> x >> y >> c >> p;
	
	valorc = p * c;
	s = (x * y) - valorc;
	
	
	cout << fixed << setprecision(2);
	cout << "R$ " << s;
	
	return 0;
}