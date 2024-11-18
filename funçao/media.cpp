#include <iostream>

using namespace std;

float media(float N1, float N2){
	float med;
	med = (N1 + N2)/2;
	
	return med;
}
int main (){
	float N1, N2;
	
	cin >> N1 >> N2;
	
	float resultado;
	
	resultado = media(N1, N2);
	
	cout << resultado << endl;
	
	
	
	return 0;
}