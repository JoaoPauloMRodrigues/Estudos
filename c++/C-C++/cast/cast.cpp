#include<iostream>

//Quando um valor � convertudo de um tipo de dado para outro ocore um cast
//Neste caso � cast pos vc informou no c�digo para qual tipo o compilador deve converter.
//Convers�o expl�cita ou CAST

main(){
	
	float divisao (int num1, int num2){
		//Faz uma divisao inteira pois num1 e num2 s�o inteiros
		//mas podemos fazer um cast
		
		return (float)num1 / (float)num2;
		
		//agora estamos indicando que o inteiro deve ser um float
	}
	
//Por�m se o compilador fizer esta convers�o de forma autom�tica chamamos isso de 
//convers�o impl�cita de dados ou coer��o

	int a =10;
	float c;
	c = a;
}

//Mas a convers�o sempre se da do maior para o menor pq se n�o h� perdas de dados
