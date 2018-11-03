//factorial.c

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(int argc, char *argv[], envp[]){ 
	
  int numero, fact;
	numero= argv[1]; //recibe el num de usafactorial.c como argumento
	fact=1;

  if(numero>0 & numero<=10){//si esta en el rango 1 al 10
	
	int i;
	for (i = numero; i > 1; i--){ //hace el factorial de un num
    fact = fact * i;
    }
		printf("El factorial de %d = %d\n", numero, fact);//imprime num=fact
		printf("ID de Prg-Factorial: ",getpid);//imprime id
  }
  else
	  printf("Error. Usar ./Nombre_pgr_invoca [%d]"),numero; //si falla imprime error y numero de id
      printf("ID de Prg-Factorial: ", getpid);
  
  return 0;
}