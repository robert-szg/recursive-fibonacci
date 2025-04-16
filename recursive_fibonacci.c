#include <stdio.h>
#include <stdlib.h>


int fibonaccir(int n) {
  printf("\nFuncao Inicializada para N = %d, Alocado no Endereco (%p)\n", n, &n);
  
	if(n <= 1) {

    if(n == 1) {
      printf("\n\t\t-----Endereco na Memoria = (%p) | N = 1, retorna %d para a soma\n", &n, n);
    }

    if(n == 0) {
      printf("\n\t\t-----Endereco na Memoria = (%p) | N = 0, retorna %d para a soma\n", &n, n);
    }

	  return n;
	} else {
    printf("\n\t Endereco na Memoria (%p) | %d > 1, chamando a funcao novamente\n\n\n", &n, n);
		return (fibonaccir(n-1) + fibonaccir(n-2));
	}
}

int main (void) {
  int n = 5;
	printf ("Resultado Final para %d = %d \n", n, fibonaccir(n));
  return 0;
}