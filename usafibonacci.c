#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char* argv[], char* envp[]){
	
	printf("Id proceso que invoca: %d\n", getpid());
	
	execve("./fibonacci", argv, envp);
	
	return 0;
}
