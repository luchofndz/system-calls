#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

int contador = 0;
void paloRojo(int sig);
void paloNegro(int sig);

int main(int argc, char *argv[]){
	
	signal(SIGUSR1, &paloRojo);
	signal(SIGUSR2, &paloNegro);
	
	while(contador!=10);
	
	return 0;
}

void paloRojo(int sig){
	printf("Ha salido un obsequio para ustedes.\n");
	printf("Dama. Esta carta Roja es pa Ud. (%d)\n", contador+1);
	contador++;
}

void paloNegro(int sig){
	printf("Ha salido un obsequio para ustedes.\n");
	printf("Caballero. Esta carta Negra es pa Ud. (%d)\n", contador+1);
	contador++;
}
