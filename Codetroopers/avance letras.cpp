#include <bits/stdc++.h>

using namespace std;


int main (){
	
	char A[10006], B[10006];
	int t; //numero de testes
	cin >> t;
	
	int j;
	int soma;
	
	for (int i =0; i<t; i++){
		cin >> A >> B;
		
		j= 0;
		soma = 0;
		do{
			
			if(A[j] != B[j]){
			    //if =z subtrai 26
			    if (A[j] == 'z'){
				    A[j]-=26;
			    }
				A[j]++;
				soma ++;
			}
			
			
			if (A[j] == B[j]){
				j++;
			}
			
		}while(strcmp(A, B) != 0);
		
		cout << soma << endl;
	}
	
	
	
	
	return 0;
}