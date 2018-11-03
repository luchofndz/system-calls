//usafactorial.c

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[], envp[]){
	
		int ppid,pid,fact;
		
			
			pid=fork(); //padre crea hijo
				if(pid==0){ // si es el hijo
					
					printf("ID proceso que invoca: ", getpid, "\n");
					
					ppid= getppid;
					//invoca a factorial.c
					
					//luego envia ppid como arg e imprime getppid en factorial.c
					fact= ( execv(./factorial.c, arg, envp, ppid);
					//si da error la llamada deberia notificar
					if(fact==-1) {
						printf("falló la llamada al sistema!: %s\n", strerror(errno));
				}


return 0;
}