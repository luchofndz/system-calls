#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <time.h>
void iniciarMazo(void);
struct mazo {
	char palo[4];
	int numC[13], numD[13], numT[13], numP[13];
} nuevoMazo;

int main(int argc, char *argv[]){
	int n;
	iniciarMazo();
	srand(time(NULL));
	n = (rand() %  4);
	
	
	return 0;
}

void iniciarMazo(void){
	nuevoMazo.palo[0] = 'c'; nuevoMazo.palo[1] = 'd';
	nuevoMazo.palo[2] = 't'; nuevoMazo.palo[3] = 'p';
	int i;
	for(i=0; i < 13; i++){
		nuevoMazo.numC[i] = i+1;
		nuevoMazo.numD[i] = i+1;
		nuevoMazo.numT[i] = i+1;
		nuevoMazo.numP[i] = i+1;
	}
}





