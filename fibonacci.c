#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char* argv[], char* envp[]){
	
	int numMax = 0, numAnterior1 = 1, numAnterior2 = 1, numActual = 1;
	if (argv[1] == NULL) {
		printf("Error: Usar ./Nombre_pgr_invoca [número]\n");
	} else {
		numMax = atoi(argv[1]);
		if (numMax > 0) {
			printf("1");
			while (numActual <= numMax) {
				printf(", %d", numActual);
				numActual = numAnterior1 + numAnterior2;
				numAnterior2 = numAnterior1;
				numAnterior1 = numActual;
			}
			printf("\n");
		}
	}
	
	printf("Id de Prg-Fibonacci: %d\n", getpid());
	
	return 0;
}
