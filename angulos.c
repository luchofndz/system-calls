#include <stdio.h> 
#include <string.h>

int main(int argc, char *argv[]) {  //usar getop

	int num, sup, comp, conj;
	num = argv[2];

	if(argv[1]=="-t" || argv[1]=="-at" || argv[1]=="-ta" ){ //option t
		if(num == 0){
			printf("Angulo nulo");
		}
		if(num>0 && num<90){
			printf("Angulo agudo");	
		}
		if(num == 90){
			printf("Angulo recto");	
		}
		if(num > 90 && num < 180){
			printf("Angulo obtuso");	
		}
		if(num == 180){
			printf("Angulo llano");	
		}
	}
	if(argv[1]=="-a"|| argv[1]=="-at" || argv[1]=="-ta"){ //option a
		comp=(90-num); //complementario
		sup=(180-num);//suplementario
		conj=(360-num); //conjugado
		
		if((comp >= 0) && (comp <90)){
			printf("Angulo Complementario: ", comp);
		}else{
			printf("Angulo Complementario: no existe");
		 }
		if((comp >= 0) && (comp <180)){
			printf("Angulo Suplementario: ", sup);
		}else{
			printf("Angulo Suplementario: no existe");
		 }
		if((comp >= 0) && (comp <360)){
			printf("Angulo Conjugado: ", conj);
		}else{
			printf("Angulo Conjugado: no existe");
		 }
	}

/* fuente write files
https://www.aprenderaprogramar.com/index.php?option=com_content&view=article&id=936:escribir-guardar-datos-en-ficheros-o-archivos-en-lenguaje-c-fputc-putc-fputs-fprintf-ejemplos-cu00537f&catid=82&Itemid=210
*/
}
