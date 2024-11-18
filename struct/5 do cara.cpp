#include <iostream>
#include <iomanip>

using namespace std;

struct Aluno{

    char nome[50];
    int matricula;
    float nota;
};

int main()
{
    Aluno alunos[100];

    int n = 0;
    int j = 0;

    float media = 0;
    int notaMenor = 0;
    int notaMenorIndex = 0;

    cin >> n >> j;

    for (int i = 0; i < n; i++) {

        cin.ignore();
        cin.getline(alunos[i].nome, 50);
        cin >> alunos[i].matricula;
        cin >> alunos[i].nota;

        media += alunos[i].nota;

        if(alunos[notaMenor].nota > alunos[i].nota){

            notaMenor = i;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Media: " << media / (n * 1.0) << endl;
    cout << alunos[notaMenor].nome << endl;
    cout << alunos[j-1].nome << " " << alunos[j-1].matricula << " " << alunos[j-1].nota << endl;

    return 0;
}