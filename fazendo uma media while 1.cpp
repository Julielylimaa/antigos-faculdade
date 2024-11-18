#include <iostream>
#include <iomanip>


using namespace std;

int main(){
	int N, i;
	float media;
	
	cin >> N;
	media = 0;
	i = 0;
	
	while (N >= 0){
		media += N;
		i ++;
		cin >> N;
	}
	cout << fixed << setprecision(2) << media/i << endl;
	
	return 0;
}