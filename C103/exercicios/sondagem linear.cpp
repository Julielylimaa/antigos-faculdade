#include <iostream>

using namespace std;

int hash_aux(int k, int m){
	int hk = k % m;
	if (hk < 0)
		return hk + m;
	else 
		return hk;
}

int hash1(int k, int i, int m){
	int hk = hash_aux(k,m);
	int hk1;
	
	hk1 = (hk + i) % m;
	
	if (hk1 < 0)
		return hk1 + m;
	else 
		return hk1;
}

int main(){
	int i = 0;
	int k, m;
	
	cin >> k >> m;
	
	for(i =0; i < m; i++){
		int h = hash1(k, i, m);
		cout << h << " ";
	}
	
	
	
	return 0;
}