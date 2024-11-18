#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int vendas;
	float  precoatual, preco;// preço é o preço dps do ajuste
	
	cout << "Preço atual = ";
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
		cout << "Novo preço: " << "R$ " << preco << " (preço reduzido)" << endl;
		
	}
	else if (vendas > 0 && vendas < 500)
	{
		//não tem alteração no preço
		cout << "Novo preço: " << "R$ " << precoatual << " (preço sem reajuste)" << endl;
	}
	else if (vendas >= 500 && vendas <1000)
	{
		//reajuste de +10%
		preco = (precoatual * 0.1) + precoatual;
		cout << "Novo preço: " << "R$ " << preco << " (preço aumentado)" << endl;
		
	}
	else if (vendas >= 1000)
	{
		// reajuste de +15%
		preco = precoatual + (precoatual * 0.15);
		cout << "Novo preço: " << "R$ " << preco << " (preço aumentado)" << endl;
	}
	
	
	return 0;
}