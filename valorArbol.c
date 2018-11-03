#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]){
	int num= atoi(argv[1]);
	
	printf("NODO R - VALOR = %d \n", num);
	printf("ID del proceso principal: %d\n\n", getpid());
	
	pid_t pid1, pid11, pid12, pid2;
	pid1 = fork();
	if(pid1 == 0){
		printf("NODO 1 - VALOR = %d\nID NODO 1: %d - ID padre NODO 1(NODO R): %d\n\n", (num + 100), getpid(), getppid());
		pid11 = fork();
		if(pid11 == 0){
			printf("NODO 1.1 - VALOR = %d\nID NODO 1.1: %d - ID padre NODO 1.1(NODO 1): %d\n\n", (num * 2), getpid(), getppid());
		exit(pid11);
		}
		pid12 = fork();
		if(pid12 == 0){
			printf("NODO 1.2 - VALOR = %d\nID NODO 1.2: %d - ID padre NODO 1.2(NODO 1): %d\n\n", (num / 2), getpid(), getppid());
		exit(pid12);
		}
		exit(pid1);
	} else {
		pid2 = fork();
		if(pid2 == 0){
			printf("NODO 2 - VALOR = %d\nID NODO 2: %d - ID padre NODO 2(NODO R): %d\n\n", (num - 100), getpid(), getppid());
		}
	}

	return 0;
}


