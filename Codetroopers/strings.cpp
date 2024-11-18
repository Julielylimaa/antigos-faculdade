//string = vetor de char
//<bits/stdc++.h>  biblioteca geral 

#include <iostream>
#include <cstring>
using namespace std;


int main (){
	int n;
	
	cin >> n;
	
	char x[100];
	int y; //numero de casas avançadas
	
	for (int i = 0; i < n; i++){
		cin >> x >> y;
		
		
		for (int i= 0; i<strlen(x); i++){
			x[i]-= y;
			if (x[i] <'A'){
				x[i]+=26;
			}
			cout << x[i];
		}
		
		cout << endl;
		 
	     
	}
	
	
	
	return 0;
}

