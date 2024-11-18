#include <iostream>
#include <iomanip>

using namespace std;

struct dado{
	int n1, n2, n3, n4;
	float media;
};

int main (){
	
	dado *v;
	int N;
	int i;
	float somamedia, mediatotal;
	
	cin >> N;
	
	//declara v como um vetor da struct 
	v = new dado[N];
	
	for (i=0; i<N; i++){
		cin >> v[i].n1 >> v[i].n2 >> v[i].n3 >> v[i].n4 ;
		v[i].media = (v[i].n1 + v[i].n2 + v[i].n3 + v[i].n4)/4.0;
	}
		
	for (i=0; i<N; i++){
		somamedia += v[i].media;
	}
	
	mediatotal = somamedia/N;
	
	cout << fixed << setprecision(2) << mediatotal << endl;
	
	delete[]v;
	
	
	return 0;
}