/* 
* Disciplina: Laboratório de Programação
* Aluno: 	  Renoir dos Reis
* Data: 	  14/08/2017
* Exercicio:  Programa de inversão de valores
*/


#include<cmath>
#include<iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Renoir dos Reis \n";
	cout << "Engenharia da Computação \n";
	cout << "--------------------------\n";
	cout << "Programa de inversão de valores \n";
	cout << "Digite o valor de A: \n";
	cin  >> a;
	cout << "Digite o valor de B: \n";
	cin  >> b;
	
	// INVERTENDO VARIÁVEIS;
	a = a - b; 
	b = b + a;
	a = b - a;
	
	// VERSÃO DO PROFESSOR
	// a = a + b;
	// b = a - b;
	// a = a - b;
	
	cout << "Novo valor de A: \n";
	cout << a;
	cout << "\nNovo valor de B: \n";
	cout << b;
	cout << "\n--------------------------\n";
	cout << "Fim do programa \n";
}
