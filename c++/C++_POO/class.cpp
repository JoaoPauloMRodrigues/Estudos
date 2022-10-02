#include <iostream>

class Casa
{
	//Estes s�o os atributos, as propriedades da classe e s�o representados por vari�veis.
	//Estes atributos ser�o as caracter�sticas de cada objeto criado a partir desta classe
	//Quando o programa estiver sendo executado e queremos saber qual � a situa��o do objeto em rela��o 
	//ao valor de seus atributos dizemos que queremos saber o ESTADO do objeto
	int NumQuartos;
	float Tamanho;
	//No geral voc� coloca b na frente de uma vari�vel bool para indicar que ela � do tipo booleana(bool)
	bool bTemSuite;

public:
	//Estas s�o as opera��es da classe, ou m�todos ou as fun��es que o objeto poder� executar quando 
	//for criado(instanciado) a partir desta classe.
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
};

int main()
{
	Casa CasaDePraia;
	return 0;
}

//O operador escopo neste caso indica que o m�todo(a fun��o) MostrarTamanho() pertence a classe Casa
void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}
