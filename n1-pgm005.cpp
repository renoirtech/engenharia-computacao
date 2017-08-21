/*
* Disciplina: Laboratório de Programação
* Aluno: 	  Renoir dos Reis
* Data: 	  14/08/2017
* Exercicio:  Programa de equação do segundo grau
*/

#include <stdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	// INICIALAIZAÇÃO DE VARIÁVEIS
	float a, b, c, delta, xum, xdois;

	// INICIALIZAÇÃO DO PROGRAMA
	cout << "Renoir dos Reis \n";
	cout << "Engenharia da Computação \n";
	cout << "--------------------------\n";
	cout << "Programa de equação do segundo grau \n";

	// ENTRADA DE DADOS
	cout << "Digite o valor de a: \n";
	cin  >> a;
	cout << "Digite o valor de b: \n";
	cin  >> b;
	cout << "Digite o valor de c: \n";
	cin  >> b;

	// PROCESSAMENTO DE DADOS
	delta = pow(b, 2) - ((4 * a) * c);

	xum   = ((b * -1))/(2 * a) + (sqrt(delta)/(2 * a)) ;
	xum   = ((b * -1))/(2 * a) - (sqrt(delta)/(2 * a)) ;

	if(delta == 0)
	{
		xum = xdois;
	}

	// SAIDA DE INFORMAÇÕES (DADOS PROCESSADOS)
	cout << "A Raiz x' é equivalente a: \n";
	cout << xum;
	cout << "\nA Raiz x\" é equivalente a: \n";
	cout << xdois;
	cout << "\n--------------------------\n";
	cout << "Fim do programa \n";
}
