#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct dados{
	char nome[50];
	int sexo; //1 masc 2 fem
	char estcivil[2]; // C-casad S-solteir V-viuv D-divorciad 
	int idade;
};

int main (){
	int i = 0, x, j;
	float somacasados =0;
	float porcasados;
	float mediaidade;
	float somaidade;
	int maioridade = 0;
	int salvarimaior;
	
	char nomemaioridade[50];
	
	dados dado[50];
	
	
	cin.getline(dado[i].nome, 50);
	
	while (strcmp(dado[i].nome, "sair")!=0) {
		x = 0;
		
		do{
			cin >> dado[i].sexo;
		}while (dado[i].sexo != 1 && dado[i].sexo != 2);
		
		
		
		
		do{
		    cin >> dado[i].estcivil;
		    
		    
			if (strcmp (dado[i].estcivil, "C")== 0){
				somacasados++;
				x++;
			}
			else if (strcmp (dado[i].estcivil, "S")== 0)
				x++;
			else if (strcmp (dado[i].estcivil, "V")== 0)
				x++;
			else if (strcmp (dado[i].estcivil, "D")== 0)
				x++;
			
			
		} while(x != 1);
		

		
		cin >> dado[i].idade;
		
		somaidade+= dado[i].idade;
		
	
		
		
		i++;
	
		cin.ignore();
		cin.getline(dado[i].nome, 50);
		
		
	}
	
	for (j=0; j <= i; j++){
	
		if (dado[j].sexo == 1){
			if (dado[j].idade > maioridade){
				maioridade = dado[j].idade;
				salvarimaior = j;
			}
		}
	
	}
	
	
	strcpy(nomemaioridade, dado[salvarimaior].nome);
	
	
	
	porcasados = somacasados *100/(i*1.0);
	
	mediaidade = somaidade/(i *1.0);
	
	cout << fixed << setprecision (2);
	cout <<"Porcentagem de pessoas casadas: " << porcasados << "%" << endl;
	cout << "Idade media da populacao: " << mediaidade << " anos" << endl;
	cout << "Nome e idade do homem mais velho: " << nomemaioridade << " " << dado[salvarimaior].idade << " anos" << endl;
	
	
	
	return 0;
}