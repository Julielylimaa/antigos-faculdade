#include <iostream>


using namespace std;


int main (){
	int n, m;
	
	
	while (cin >> n >> m){
		int mat[n][m];
		int aux;
		
	
		for (int i = 0; i<n; i++){
			for (int j = 0; j < m; j++){
				cin >> mat[i][j];
			
				
			}
		}
		
	
		for (int i = 0; i<n; i++){
			for (int j = 0; j < m; j++){
				aux = 0;
				if (mat[i][j] == 1)
					cout << "9";
				
				
				else{
					if (j!= m-1){
						aux+= mat[i][j+1];
					}
					if (j != 0){
						aux += mat[i][j-1];
					}
					if (i != 0){
						aux += mat[i-1][j];
					}
					if (i!= n-1){
						aux += mat[i+1][j];
					}
					
					cout << aux;
				}
			}
			cout << endl;	
		}
		
		
	}
	return 0;
	
}