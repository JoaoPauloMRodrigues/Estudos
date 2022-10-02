#include <iostream>
#include <locale>
/*Exerc�cio Soma De 10 N�meros */

int main()
{
	setlocale(LC_ALL, "portuguese");

	double Numeros[10];
	double Soma{ 0.0 };
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Digite O N�mero" << (i+1) << ": ";
		//i++ � o mesmo que i = i + 1; e neste caso a regi�o
		//de mem�ria de nome i est� sendo afetada e incrementada
		//mas se usarmos somente (i+1) nada na mem�ria ser� afetado
		//pois n�o tem atribui��o n�o tem: i = (i + 1). Somente  (i + 1)
		//e assim s� usamos o valor de i e n�o alteramos

		std::cin >> Numeros[i];
		Soma += Numeros[i];
		//Limpa a tela Clear Screen
		//Clear no Linux OU CLS Windows
		system("Clear || CLS");
	}
	std::cout << "\n A Soma dos N�meros �: " << Soma << "\n";  
	system("PAUSE");
	return 0;
}
