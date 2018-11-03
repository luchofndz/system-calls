#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <time.h>
void iniciarMazo(void);
struct mazo {    //cards
	char palo[4];  // 4 cards kind
	int numC[13], numD[13], numT[13], numP[13]; //corazon, diamante, trebol, pica
} nuevoMazo; // 13 numbers of trebol, 13 of corazon..


int main(int argc, char *argv[]){

	int pid_mago = atoi(argv[1]);   //pid in argv[1]
	int carta[];
	int color; // 1 negro(trebol o pica) 2 rojo(corazon diamante)
	int n;
	iniciarMazo();
	srand(time(NULL)); // semilla reloj
	n = (rand() %  4); // 0 a 3 por que era uno menos


	return 0;
}

void iniciarMazo(void){  //constructor
	nuevoMazo.palo[0] = 'c'; nuevoMazo.palo[1] = 'd';// cards kind
	nuevoMazo.palo[2] = 't'; nuevoMazo.palo[3] = 'p';
	int i;
	for(i=0; i < 13; i++){ // number of cards
		nuevoMazo.numC[i] = i+1;
		nuevoMazo.numD[i] = i+1;
		nuevoMazo.numT[i] = i+1;
		nuevoMazo.numP[i] = i+1;
}

	for (i = 0; i < 10; i++){ //distribution cards		10
		carta[i]=(rand() %  4) // random number

		switch(carta[i]){
			case 0:
				printf("Es un palo CORAZON: %d/n",i);
				color=2;
				break;
			case 1:
				printf("Es un palo TREBOL: %d/n",i);
				color=1;
				break;
			case 2:
				printf("Es un palo DIAMANTE: %d/n",i);
				color=2;
				break;
			case 3:
				printf("Es un palo PICA: %d/n",i);
				color=1;
				break;
			default:
				prinft("Error: carta no definida");
		}



		//1 de cada 5 quiere pan negro
		if(contador_huesped%5==0){ //si al dividirlo por 5 da cero de resto es mult de 5, cada 5 va a dar 0;

			printf("Pedido de tostada de Pan Negro. Huésped: ",contador_huesped,"\n");
			kill(pid_tostadora, SIGUSR2);
			sleep(1); //tarde 1 seg

		} else{ //el resto pide pan blnco
				printf("Pedido de tostada de Pan Blanco. Huésped: ",contador_huesped,"\n");
				kill(pid_tostadora, SIGUSR1);
				sleep(2); //pan blanco tarda 2 seg


				contador_huesped = contador_huesped++;
			}
		}
	return 0;
}
