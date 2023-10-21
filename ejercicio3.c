#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int matriz [2][3];
	int i,j,suma;
	int menvalor ;
	
	for(i=0;i<2;i++){
		
		for(j=0;j<3;j++){
			printf("ingrese el valor para la fila  y columna  :");
			scanf("%d",&matriz[i][j]);
		}
		
	}
	
	for(j=0;j<3;j++){
		matriz[0][j] *= 4;
		
	}
	
	for(i=0;i<3;i++){
		matriz[i][2] *= 3;
		
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			
			if(matriz[i][j]< menvalor){
				menvalor=matriz[i][j];
				
			}
			
		}
		
	}for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			suma += matriz[i][j];
		}
	}
	
	printf("contenido de la matriz \n");
	for(i=0;i<2;i++){
		
		for(j=0;j<3;j++){
			printf("%d ",matriz [i][j]);
			
		}
		
		printf("\n ");
	}
	
	printf("el menor valor de la matriz es : %d\n",menvalor);
	printf("la suma de los valores es : %d\n",suma);
	
	return 0;
}
