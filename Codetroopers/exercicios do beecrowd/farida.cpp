#include <bits/stdc++.h>
#define rep(i,a,b) for (int i=a; i<b; i++) 
//define uma maneira mais rapida de usar o for 

using namespace std;
int v[10004];
int n;
long long pd[10004]; //respostas para cada posiçao

//nao pegar -  i+1
//pegar - i+2 soma
long long solve(int i){
	//caso base
	//ver se ja calculou
	if(pd[i]!=-1){
		return pd[i]; //se nao for -1 ja foi calculado
	}
	//calcular
	
	if (i >= n)
		return 0; //chegou no final e nao tem mais opçoes
	int p1,p2; //possibilidades
	p1 = solve(i+1);//nao pegar
	p2 = v[i]+solve(i+2) ; //pegar
	//return
	return pd[i]= max(p1,p2);
}
int main (){
	
	memset(pd,-1,sizeof(pd)); //definir todas pos como -1
	
	cin >> n;
	rep(i,0,n){
		cin >> v[i];
	}
	
	cout << solve(0) << endl;
		
	return 0;
}