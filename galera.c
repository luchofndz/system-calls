#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	int pidMago, contadorCarta, i, palo;
	pidMago = atoi(argv[1]);
	srand(time(NULL));
	
	for(i = 1; i <= 10; i++){
		sleep(3);
		palo = (rand() %  4);
		switch (palo){
			case 0:
				printf("Es un palo CORAZON: %d\n", i);
				kill(pidMago, SIGUSR1);
			break;
			case 1:
				printf("Es un palo DIAMANTE: %d\n", i);
				kill(pidMago, SIGUSR1);
			break;
			case 2:
				printf("Es un palo TREBOL: %d\n", i);
				kill(pidMago, SIGUSR2);
			break;
			case 3:
				printf("Es un palo PICA: %d\n", i);
				kill(pidMago, SIGUSR2);
			break;
		}
	}
	
	
	
	return 0;
}



