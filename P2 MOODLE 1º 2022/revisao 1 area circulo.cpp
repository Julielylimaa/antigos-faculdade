#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

int main(){
    int r; //raio do circulo
    float valor_da_area;
    
    
    //lendo o raio do circulo
    cin >> r;
    
    //calculando a area
    valor_da_area = pow(r, 2) * 3.14159;
    
    //saida da area
    
    cout << fixed << setprecision(3) << "AREA = " << valor_da_area << endl;
    
    
    
    return 0;
}