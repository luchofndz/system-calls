#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[], envp[]){
	
		int fd,pid;
		int pos;
		
		fd = open(argv[1],O_RDONLY); //abrir archivo
		
		if(fd!=-1){ //comprobar si existe
			
			pos = lseek(fd,SEEK_SET,SEEK_END); //recorre desde principio a fin el archivo 
			
			pid=fork(); //padre crea hijo
				if(pid==0){ // si es el hijo
					
					printf("size del archivo: ",pos);
				}
			close(fd);
}
		}
		else
			printf("\n Archivo inexistente"); //no esxiste el file
		}
		

return 0;
}