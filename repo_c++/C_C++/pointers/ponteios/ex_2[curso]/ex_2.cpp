#include<stdio.h>

int main (){
	
	int teste = 123;
	int *p; //<- inizializando o ponteiro
	
	p = &teste; // <- assim ele est� salvando o endere�o o endere�o de teste
	
	//printf("%d", p);
	//*p retorna o valor do apontado
	//p retorna o endere�o do apontado
	
	printf("\n--- END DO APONTADO (&teste) -----\n");
	printf("teste = %x",&teste);
	printf("\n\n--- END DE AONDE O PONTEIRO APONTA (p) -----\n");
	printf("p = %x",p);
	
	printf("\n\n\n---- END DA ONDE O PONTEIRO ESTA SALVO (&p)-----\n");
	printf("p = %x",&p); //<- endere�o de onde o ponteiro est� salvo
	
	printf("\n\n\n---- MUDANDO O VALOR DE TESTE PELO PONTEIRO -----\n");
	printf("teste = %d",teste);
	printf("\n\n---- MUDADO ----(*p = 321)\n");
	
	*p = 321; //<- mudando o valor de onde o ponteiro aponta
	
	printf("teste = %d", teste);
	
}
