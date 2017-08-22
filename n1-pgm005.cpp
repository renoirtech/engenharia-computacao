/*
* Disciplina: Laboratório de Programação
* Aluno: 	  Renoir dos Reis
* Data: 	  14/08/2017
* Exercicio:  Programa de equação do segundo grau
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	// INICIALAIZAÇÃO DE VARIÁVEIS
	float a, b, c, delta, xum, xdois;

	// INICIALIZAÇÃO DO PROGRAMA
	cout << "\n\n\n";
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
	cin  >> c;

	cout << "\n\nEquação informada\n";
	cout << a;
	cout << "x² + ";
	cout << b;
	cout << "x + ";
	cout << c;
	cout << "\n\n";

	// PROCESSAMENTO DE DADOS
	delta = pow(b, 2) - (4 * a * c);
	cout << "Valor de delta\n";
	cout << delta;
	cout << "\n\n";

	xum   = ((b * -1) / (2 * a)) + (sqrt(delta) / (2 * a)) ;
	xum   = ((b * -1) / (2 * a)) - (sqrt(delta) / (2 * a)) ;

	if(delta > 0)
	{
		if(delta == 0)
		{
			xum = xdois;
		}

		// SAIDA DE INFORMAÇÕES (DADOS PROCESSADOS)
		cout << "A Raiz x' é equivalente a: \n";
		cout << xum;
		cout << "\nA Raiz x\" é equivalente a: \n";
		cout << xdois;
	}
	else
	{
		cout << "A equação não possui raizes reais\n";
	}

	cout << "\n\n--------------------------\n";
	cout << "Fim do programa";
	cout << "\n\n\n";
}
