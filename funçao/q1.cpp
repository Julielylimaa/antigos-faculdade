#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


float volume(int raio, float pi){
	
	float V;
	pi = 3.14;
 
    V = (pi * pow(raio, 3)) * 4/3;
    
    return V;
	
}

int main (){
	int raio;
	float v;
	float pi;
	
	cin >> raio; 
	
	v = volume(raio, pi);
	cout << fixed << setprecision(2) << v << endl;
	
	
	
	return 0;
}