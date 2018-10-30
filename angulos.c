#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

	int num, sup, comp, conj;
	num = atoi(argv[2]); //atoi make string to int
	string options;
	boolean file; //to validate open file
	haveFile = false;
	FILE *file; // puntero to file
	string angulo, aSup, aConj, aCom; // angulos to file

	while(options = getop(argc,argv,envp) != -1){  //-1 is when you have no more options


		if(option == "-t" || option == "-at" || option == "-ta" ){ //option t
			if(num == 0){
				printf("Angulo nulo \n");
				angulo = "Angulo nulo \n";
			}
			if(num>0 && num<90){
				printf("Angulo agudo \n");
				angulo = "Angulo agudo \n";
			}
			if(num == 90){
				printf("Angulo recto \n");
				angulo = "Angulo recto \n";
			}
			if(num > 90 && num < 180){
				printf("Angulo obtuso \n");
				angulo = "Angulo obtuso \n"
			}
			if(num == 180){
				printf("Angulo llano \n");
				angulo = "Angulo llano \n";
			}
		}
		if(option == "-a"|| option == "-at" || option == "-ta"){ //option a
			comp = (90-num); //complementario
			sup = (180-num);//suplementario
			conj = (360-num); //conjugado

			if((comp >= 0) && (comp <90)){
				aCom = printf("Angulo Complementario: %d \n", comp);
			}else{
				aCom = printf("Angulo Complementario: no existe \n");
			 }
			if((comp >= 0) && (comp <180)){
				aSup = printf("Angulo Suplementario: %d \n", sup);
			}else{
				aSup = printf("Angulo Suplementario: no existe \n");
			 }
			if((comp >= 0) && (comp <360)){
				aConj = printf("Angulo Conjugado: %d \n", conj);
			}else{
				aConj = printf("Angulo Conjugado: no existe \n");
			}
		}
	}
	if(argc[4] == "-f"){ // if have a file
		haveFile = true;
		file = fopen(argv[5],"wr"); // opened to write access
		fputs(angulo, file);
		fputs(aCom, file);
		fputs(aSup, file);
		fConj(aConj, file);
		fclose(file);
	}

/* fuentes

getop:
http://manpages.ubuntu.com/manpages/bionic/es/man3/getopt.3.html
files:
https://www.aprenderaprogramar.com/index.php?option=com_content&view=article&id=936:escribir-guardar-datos-en-ficheros-o-archivos-en-lenguaje-c-fputc-putc-fputs-fprintf-ejemplos-cu00537f&catid=82&Itemid=210
*/
	return 0;
}
