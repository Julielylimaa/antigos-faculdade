#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

int main(){
    int num; //numero do funcionario 
    int horas; //numero de horas trabalhadas
    float valor_hora; // valor recebido por hora
    float salario; //valor do salario total
    
    //entrada dos dados 
    cin >> num;
    cin >> horas;
    cin >> valor_hora;
    
    //calculando o salario total
    salario = valor_hora * horas;
    
    //saida dos dados 
    cout << "NUMBER = " << num << endl;
    cout << fixed << setprecision(2) << "SALARY = US$ " << salario << endl;
    
    
    
    return 0;
}