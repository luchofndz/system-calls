#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>

int main(int argc, char *argv[]){
	int opt;
	char* file, *nombreArchivo;
	DIR *directorio1, *directorio2;
	struct dirent *ent;
	struct stat sd;
	if (argc != 3){
		file = "./";
	} else {
		file = argv[2];
	}
	directorio1 = opendir(file);
	directorio2 = opendir(file);
	
	while ((opt = getopt(argc, argv, "dr")) != -1) {
		switch (opt){
			case 'd':
				printf("Directorios de: %s\n", file);
				while ( (ent = readdir (directorio1)) != NULL) {
					nombreArchivo = ent->d_name;
					if (strcmp(nombreArchivo, ".") != 0 && strcmp(nombreArchivo, "..") != 0) {
						stat(nombreArchivo, &sd);
						switch (sd.st_mode & S_IFMT){
							case S_IFDIR:
								printf("%s - Directorio\n", nombreArchivo);
							break;
						}
					}
				}
				printf("\n");
			break;
			case 'r':
				printf("Archivos regulares del directorio: %s\n", file);
				while ( (ent = readdir (directorio2)) != NULL) {
					nombreArchivo = ent->d_name;
					stat(nombreArchivo, &sd);
					switch (sd.st_mode & S_IFMT){
						case S_IFREG:
							printf("%s - Regular\n", nombreArchivo);
						break;
					}
				}
				printf("\n");
			break;
		}
	}

	return 0;
}
