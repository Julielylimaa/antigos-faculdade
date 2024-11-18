#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int N;//numero de alunos que irão responder a pequisa 
	int q1, q2, q3; //resposta das perguntas
	int i; //parametro do for
	
	float p1, p2, p3, p4;
	int ap = 0; //alunos q se sentem seguros para aula presencial
	int ar = 0; //alunos que vao continuar aulas remotas
	int asrp = 0; //alunos que residem em santa rita e querem presencial
	int ansrp = 0; // alunos que NÃO residem em santa rita e querem presencial
	
	
	cout << "Quantos alunos? ";
	cin >> N;
	
	for (i = 1; i <= N; i++){
		cout << "Respostas do aluno (" << i << "): " << endl;
		
		cout << "Você se sente seguro para voltar às aulas presenciais? (1-sim 2-não): ";
		cin >> q1;
		
		cout <<"Você pretende voltar às aulas presenciais? (1-sim 2-não): ";
		cin >> q2;
		
		cout << "Você reside em Sta. Rita do Sapucaí? (1-sim 2-não): ";
		cin >> q3;
		
		if (q1 == 1)
			ap++;
		
		if (q2 == 2)
			ar++;
		
		if (q2 == 1 && q3 == 1)
			asrp++;
		
		else if (q2 == 1 && q3 == 2)
			ansrp ++;
		
		
	}
	
	
	p1 = (ap * 100)/ (N * 1.0); 
	//porcentagem alunos que se sentem seguros para aula presencial
	 
	p2 = (ar * 100)/ (N * 1.0);
	//porcentagem alunos que continuarão com as aulas remotas
	
	p3 = (asrp * 100)/ (N * 1.0);
	// porcentagem alunos que moram em santa rita e voltariam presencial
	
	p4 = (ansrp * 100)/ (N * 1.0);
	//porcentagem alunos que nao moram em santa rita e voltariam presencial
	
	cout << "\nAlunos que se sentem seguros com a volta das aulas presenciais (%): " << p1 << endl;
	cout << "Alunos que pretendem continuar com aulas remotas (%): " << p2 << endl;
	cout << "Alunos que residem em SRS e pretendem voltar às aulas presenciais (%): " << p3 << endl;
	cout << "Alunos que não residem em SRS e pretendem voltar às aulas presenciais (%): " << p4 << endl;
	
	
	
	return 0;
}