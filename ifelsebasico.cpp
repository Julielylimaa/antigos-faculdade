#include <iostream>


using namespace std;

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int x;
	cin >> x;
	
	if (x == 3){
		cout << "Esse � o n�mero 3.";
	}
	else{
		cout << x;
	}
	
	return 0;
}