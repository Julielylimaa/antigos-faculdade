#include <iostream>

using namespace std;


int main (){
	
	int n, r;
	
	while (cin >> n >> r){
		bool ret[n+1];
		
		for (int i =1; i <=n; i++){
			ret[i]=false;
		}
		
		
		for (int i = 0; i<r; i++){
			int x;
			cin >> x;
			ret[x]= true;
		}
		
		if (n == r)
			cout << "*" << endl;
		
		else{
			for (int i = 1; i<= n; i++){
				if (ret[i] == false)
					cout << i << " ";
			  }	
		}
		
		
	}
	
	
	return 0;
}