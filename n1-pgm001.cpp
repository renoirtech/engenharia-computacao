/* 
* Disciplina: Laboratório de Programação
* Aluno: 	   Renoir dos Reis
* Data: 	   14/08/2017
* Exercicio:  Sistema de calculo de média simples
*/
#include<cmath>
#include<iostream>

using namespace std;

int main()
{	 
	float a, b, c, media;
	
	cout << "Renoir dos Reis \n";
	cout << "Engenharia da Computação \n";
	cout << "Programa de médias \n";
	cout << "--------------------\n";
	cout << "Digite a primeira média \n";
	cin >> a;
	cout << "Digite a segunda média \n";
	cin >> b;
	cout << "Digite a segunda média \n";
	cin >> c;
	
	// calculando o valor da da média
	 
	media = (a + b + c) / 3;
	
	cout << "A média equivale a: \n";
	cout << media;
	cout << "\n Fim de programa \n";
	
}
