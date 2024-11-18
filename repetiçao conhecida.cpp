#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int N, i;
	float S;
	
	cin >> N;
	i = 1;
	
	while (i <= N){
		
		if (N > 1000)
			break;
		
		S += (1.0/i);
		i ++;
		
	}	
	cout << fixed << setprecision(4) << S << endl;
	return 0;
}