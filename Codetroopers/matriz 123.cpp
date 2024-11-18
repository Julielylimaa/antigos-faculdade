#include <iostream>

using namespace std;

int main (){
	int n;
	
	int mat[70][70];
	
	while(cin >> n){
		
		for (int i = 0; i<n; i++){
			for (int j = 0; j<n; j++){
				if ((i+j)==n-1)
						mat[i][j] = 2;
				else
					if (j == i)
						mat[i][j] =1;
					
					
					else 
						mat[i][j] = 3;
			}
		}
		
		for (int i = 0; i<n; i++){
			for (int j = 0; j<n; j++){
				cout << mat[i][j];
			}
			cout << endl;
		}
	}
	
	
	
	
	return 0;
}