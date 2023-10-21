#include <stdio.h>

int main() {
	
	int matriz [2][3];
	int i,j;
	
	for(i=0;i<2;i++){
		
		for(j=0;j<3;j++){
			printf("ingrese el valor para la fila y columna :");
			scanf("%d",&matriz[i][j]);
		}
		
	}
	
	printf("contenido de la matriz :\n ");
	for(i=0;i<2;i++){
		
		for(j=0;j<3;j++){
			printf("%d ",matriz [i][j]);
			
		}
		
		printf("\n ");
	}
	
	return 0;
}

