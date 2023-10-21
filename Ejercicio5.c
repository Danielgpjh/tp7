#include <stdio.h>

int main() 
{
	int alumnos[100][3];
	int i=0,j=0,elejir;

	float promedio=0;
	
	for(i=0;i<4;i++)
	{
		printf("El numero del legajo del alumno es: %d\n", i+1);
	
		for(j=0;j<3;j++)
		{
			printf("Ingrese La nota del trimestre %d \n",j+1);
			scanf("%d",&alumnos[i][j]);
			if(alumnos[i][j]>10 || alumnos[i][j]<0)
			{
				while(alumnos[i][j]>10 || alumnos[i][j]<0)
				{
					printf("Ingrese otra vez la nota del trimestre %d \n",j+1);
					printf("La nota tiene que ser 1 o mayor ");
					scanf("%d",&alumnos[i][j]);
				}
				
			}
			
		}
		
	}

	printf("Desea corregir una nota?\n");
	printf("1=si\n");
	printf("2=no\n");
	scanf("%d",&elejir);
	if( elejir>2 || elejir<1)
	{
		while(elejir>2 || elejir<1)
		{
			printf("Desicion incorrecta\n");
			printf("Porfavor ingrese 1(si) o 2(no)\n");
			scanf("%d",&elejir);
			
		}
		
	}
	while(elejir!=2)
	{
		
		printf("Ingrese el numero de legajo del alumno que desea correjir\n");
		scanf("%d",&i);
		
		printf("El numero del legajo del alumno es: %d\n", i);
		
		printf("Ingrese el trimestre que desea correjir\n");
		printf("1=Primer trimestre\n");
		printf("2=Segundo trimestre\n");
		printf("3=Tercero trimestre\n");
		
		scanf("%d",&j);
		
		
		printf("Ingrese la nota\n");
		scanf("%d",&alumnos[i-1][j-1]);
		
		printf("Desea corregir una nota mal ingresada?\n");
		printf("1=si\n");
		printf("2=no\n");
		scanf("%d",&elejir);
		
	}

	
	printf("Nº de legajo    1º trimestre   2º trimestre     º3 trimestre      Promedio\n");
	for(i=0;i<4;i++)
	{
		printf("%d",i+1);
		for(j=0;j<3;j++)
		{
			printf("   %d ",alumnos[i][j]);
			promedio=promedio+alumnos[i][j];
	
		}
		
		promedio=promedio/3;
		
		printf("           %.2f ",promedio);
		
		printf(" \n");
		promedio=0;
	}

	return 0;
}

