#include <stdio.h>
#include <stdlib.h>


int main() {
	int torre[6][20];
	int filas=0;
	int colum=0;
	int promedio=0;
	int habiTotal=0;
	
	for(filas=0;filas<20;filas++) {
		for(colum=0;colum<6;colum++) {
			
			printf("Numero de torre: %d\n", filas+1);
			printf("Numero de departamento: %d\n",colum+1);
			printf("Ingrese los habitantes de la torre: \n");
			scanf("%d", &torre[filas][colum]);
			habiTotal+=torre[filas][colum];
			
		}
		
		promedio=torre[filas][colum]+torre[filas][2]+torre[filas][3]+torre[filas][4]+torre[filas][5];
		promedio=promedio/5;
		printf("\n\nEl promedio de habitantes por piso es de: %d\n\n",promedio);
	}
	
	printf("Numero total de habitantes: %d\n",habiTotal);
	
	return 0;
}

