#include <iostream>

using namespace std;

int main (){
	
	int X, Y;
	
	cin >> X >> Y;
	
	while (X != Y){
		
		if (X < Y)
			cout << "Crescente" << endl;
		
		else if (X > Y)
			cout << "Decrescente" << endl;
		
		cin >> X >> Y;
	}
	
	
	
	
	return 0;
}