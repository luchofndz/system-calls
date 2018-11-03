#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void paloRojo(int sig);
void paloNegro(int sig);
int counter_cards = 1;

int main(int argc, char *argv[]){//recibe en arg 1 el pid de galera

  kill(pid_galera, SIGUSR2);
  sleep(1); //tarde 1 seg

  signal(SIGUSR1, &paloRojo); //recibe señal palo negro

  signal(SIGUSR2, &paloNegro); //recibe señan palo rojo
}

void paloRojo(int sig){
  printf("Dama. Esta carta roja es para Ud. %(d) /n", counter_cards);
  printf("Ha salido un obsequio para ustedes. /n")
  counter_cards++;
}
void paloNegro(int sig){
  printf("Caballero. Esta carta negra es para Ud. %(d) /n", counter_cards);
  printf("Ha salido un obsequio para ustedes. /n");
  counter_cards++;
}
