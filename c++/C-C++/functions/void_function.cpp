#include <iostream>

//Fun��o void, n�o retorna nada (N�o precisa de um "return;" para retornar algo), apenas faz uma a��o;
//E pode receber parametros;

void mensagem(char letra){
	std::cout << "void function, helllo!!!\n";	
}

int main(){
	mensagem();
	//return; -> sai da fun��o, no ponto do return;
	//se n�o ap�s executar a fun��o ele retorna automaticamente
}
