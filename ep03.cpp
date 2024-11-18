#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int vendas;
	float  precoatual, preco;// pre�o � o pre�o dps do ajuste
	
	cout << "Pre�o atual = ";
	cin >> precoatual;
	cout << "Vendas = ";
	cin >> vendas;
	
	cout << fixed << setprecision(2);
	
	if (vendas < 0 || precoatual < 0)
	{
		cout << "Erro de entrada" << endl;
	}
	
	else if (vendas == 0)
	{
		// reajuste de -10%
		preco = precoatual - (precoatual * 0.1);
		cout << "Novo pre�o: " << "R$ " << preco << " (pre�o reduzido)" << endl;
		
	}
	else if (vendas > 0 && vendas < 500)
	{
		//n�o tem altera��o no pre�o
		cout << "Novo pre�o: " << "R$ " << precoatual << " (pre�o sem reajuste)" << endl;
	}
	else if (vendas >= 500 && vendas <1000)
	{
		//reajuste de +10%
		preco = (precoatual * 0.1) + precoatual;
		cout << "Novo pre�o: " << "R$ " << preco << " (pre�o aumentado)" << endl;
		
	}
	else if (vendas >= 1000)
	{
		// reajuste de +15%
		preco = precoatual + (precoatual * 0.15);
		cout << "Novo pre�o: " << "R$ " << preco << " (pre�o aumentado)" << endl;
	}
	
	
	return 0;
}