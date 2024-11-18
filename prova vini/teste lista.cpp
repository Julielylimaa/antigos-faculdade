#include <iostream>
#include <list>
using namespace std;

//Fun??o para efetuar o calculo
int nAbaixo(list<int> lista, int X) 
{
  int F;
  list<int>::iterator p;
  for (p = lista.begin(); p != lista.end(); p++)
    if (*p < X)
    {
      F++;
    }

  return F;
}
int main()
{
  list<int> lista; //Ponteiro para fila
  int N;           //n?meros que ser?o inseridos
  int r;           //Para guardar a resposta
  int X;           //Para guardar o valor de comparação

  //Inserindo numeros at? que encontre 0, que ser? a finaliza??o
  cin >> N;
  while (N != 0)
  {
    lista.push_front(N);
    cin >> N;
  }
  //Inserindo qual será o valor de comparação
  cin >> X;
  //Chamando a fun??o
  r = nAbaixo(lista, X);

  //Apresentando o resultado
  cout << r << endl;

  //desalocando mem?ria
  while (!lista.empty())
    lista.pop_front();
  return 0;
}