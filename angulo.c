#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>

int main(int argc, char *argv[]){
	int num = atoi(argv[2]);
	int opt;
	int fd, long1 = 0, long2 = 0, long3 = 0, long4 = 0;
	char* angulo;
	char comple[50], suple[50], conj[50];

	while ((opt = getopt(argc, argv, "taf")) != -1) {
		switch (opt){
			case 't':
				if (num == 0){
					long1 = printf("Angulo nulo\n");
					angulo = "Angulo nulo\n";
				}
				if (num > 0 && num < 90){
					long1 = printf("Angulo agudo\n");
					angulo = "Angulo agudo\n";
				}
				if (num == 90){
					long1 = printf("Angulo recto\n");
					angulo = "Angulo recto\n";
				}
				if (num > 90 && num < 180){
					long1 = printf("Angulo obtuso\n");
					angulo = "Angulo obtuso\n";
				}
				if (num == 180){
					long1 = printf("Angulo llano\n");
					angulo = "Angulo llano\n";
				}
			break;
			case 'a':
				if(num < 90 && num > 0){
					long2 = printf("Angulo complementario: %d\n", (90 - num));
					sprintf(comple, "Angulo complementario: %d\n", (90 - num));
				} else {
					long2 = printf("Angulo complementario: no existe para %d\n", num);
					sprintf(comple, "Angulo complementario: no existe para %d\n", num);
					
				}
				if(num < 180 && num > 0){
					long3 = printf("Angulo suplementario: %d\n", (180 - num));
					sprintf(suple, "Angulo suplementario: %d\n", (180 - num));
				} else {
					long3 = printf("Angulo suplementario: no existe para %d\n", num);
					sprintf(suple, "Angulo suplementario: no existe para %d\n", num);
				}
				if(num < 360 && num >= 0){
					long4 = printf("Angulo conjugado: %d\n", (360 - num));
					sprintf(conj, "Angulo conjugado: %d\n", (360 - num));
				} else {
					long4 = printf("Angulo conjugado: no existe para %d\n", num);
					sprintf(conj, "Angulo conjugado: no existe para %d\n", num);
				}
			break;
			case 'f':
				fd = open(argv[4], O_CREAT | O_WRONLY);
				write(fd, angulo, long1);
				write(fd, comple, long2);
				write(fd, suple, long3);
				write(fd, conj, long4);
				close(fd);
			break;
		}
	}
	return 0;
	
 }









