#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <time.h>
void iniciarMazo(int pid_mago);

int main(int argc, char *argv[]){

	srand(time(NULL)); // semilla reloj
	int pid_mago = atoi(argv[1]);   //pid in argv[1]
	iniciarMazo(pid_mago);

	return 0;
}

void iniciarMazo(int pid_mago){  //constructor
	int carta[];


	for (i = 0; i < 10; i++){ //distribution cards		10
		carta[i]=(rand() %  4) // random number 0 to 3

		switch(carta[i]){
			case 0:
				printf("Es un palo CORAZON: %d/n",i);
				kill(pid_mago, SIGUSR2);
				sleep(3); //varita cada 3
				break;
			case 1:
				printf("Es un palo TREBOL: %d/n",i);
				kill(pid_mago, SIGUSR1);
				sleep(3); //varita cada 3 segs
				break;
			case 2:
				printf("Es un palo DIAMANTE: %d/n",i);
				kill(pid_mago, SIGUSR2);
				sleep(3); //varita cada 3
				break;
			case 3:
				printf("Es un palo PICA: %d/n",i);
				kill(pid_mago, SIGUSR1);
				sleep(3); //varita cada 3 segs
				break;
			default:
				prinft("Error: carta no definida");
		}
	}
	return 0;
}
