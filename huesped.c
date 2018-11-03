//./huesped [pid_tostadora]

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){//recibe en arg 1 el pid de la tostadora
	
int pid_tostadora, i, contador_huesped;

contador_huesped=0;

pid_tostadora = atoi(argv[1]);

for (i = 1; i < 7; i++) //se muestra hasta 7 huesped
{
	//1 de cada 5 quiere pan negro
	if(contador_huesped%5==0){ //si al dividirlo por 5 da cero de resto es mult de 5, cada 5 va a dar 0;
	
		printf("Pedido de tostada de Pan Negro. Huésped: ",contador_huesped,"\n");
		kill(pid_tostadora, SIGUSR2);
		sleep(1); //tarde 1 seg
	
	}
	else{ //el resto pide pan blnco
		printf("Pedido de tostada de Pan Blanco. Huésped: ",contador_huesped,"\n");
		kill(pid_tostadora, SIGUSR1);
		sleep(2); //pan blanco tarda 2 seg
		
	
contador_huesped = contador_huesped++;
}
return 0;
}