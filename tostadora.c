//tostadora.c

#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int huesped=0;
int pidself; //pid de la tostadora
pidself=getpid;

void panblanco(int sig);
void pannegro(int sig);


int main(){

signal(SIGALRM, &reloj); //señal de tostadora libre	
	
signal(SIGUSR1, &panblanco); //recibe señal pedido pan blanco

signal(SIGUSR2, &pannegro); //recibe señan pedido pan negro

while (huesped != 7) ; //hasta q el huesped sea numero 7


return 0;
}

void panblanco(int sig)
{
	huesped++;
	printf("Deseo tostadas de pan blanco.\n");
	printf("Tostadas de pan blanco. (%d)\n", huesped);
	printf("Tostadas listas.\n");
	kill(pidself, SIGALARM);
}

void pannegro(int sig);
{
	huesped++;
	printf("Deseo tostadas de pan negro.\n");
	printf("Tostadas de pan negro. (%d)\n", huesped);
	printf("Tostadas listas.\n");
	kill(pidself, SIGALARM);
}

void reloj(int i)
{
printf("Tostadora libre, esperando pan.\n");
alarm();
pause();
}