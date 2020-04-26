#include <stdio.h>
#include <stdlib.h>

void imprimir(int a[], int elem);
void burbuja(int a[],int elem);


int main() {
	
	int opcion;
	int vector[10];
	int contador = 0;
	int calif,i;
	//int elementos;
	
	//printf("Cuntas calificaciones quieres caturar ");
	//scanf("%d" ,&elementos);
	//int vector2[elementos];
	
	do
{
	printf("1. Insertar calificaciones\n ");
	printf("2. Visualizar calificaciones\n ");
	printf("3. Modificar calificaciones\n ");
	printf("4. Promedio\n ");
	printf("5. Ordenar calificaciones\n ");
	printf("0. Salir\n ");
	printf("Selecciona una opcion\n");
	scanf("%d" ,&opcion);
	
	switch(opcion)
	{
	   case 1://Capturar calificacion
	   if(contador>=9)
	   {
	   	printf("Ya no hay espacio para calificaciones\n");
	   }
	   else
	   {
	   	printf("Inserta la calificacion %d\n" ,contador+1);
		scanf("%d" ,&vector[contador]);
		printf("\nCalificacion almacenada\n");
		contador++;
	   }
			break;
		case 2://Visualizacion
		if(contador<=0)
		{
			printf("Aun no hay calificaciones\n");
			
		}
		else
		{
		printf("\nCalificaciones:\n");
		imprimir(vector,contador);
		printf("\n");
		}
			break;
		case 3://Editar
		int pos;
		for(i=0;i<contador;i++)
		{
			printf("[%d] " ,vector[i]);
		}
		printf("Elije una posicion a editar\n");
		scanf("%d" ,&pos);
		printf("Cual es la nueva calificacion:\n");
		scanf("%d" ,&vector[pos-1]);
		printf("Calificacion actualizada\n");
			break;
		case 4:
			break;
		case 5:
			if (contador<=0)
			{
				printf("\nNo hay elementos para odenar\n");
			}
			else
			{
			burbuja(vector,contador);
			}
			break;
		case 0:
			printf("\nPrograma finalizado\n");
			break;
	}
	system("pause");
	system("cls");
	
}while(opcion!=0);
	
}

void imprimir(int a[], int elem)
{
	int i;
	for(i=0;i<elem;i++)
		{
			printf("[%d] " ,a[i]);
		}
}

void burbuja (int a[], int elem)
{
	int i, j, aux;
	
	//ciclo para posiciones
	//10 elementos 0-9
	for(i=0;i<elem;i++)
	{
		//ciclo para comparar elementos
		//0-8
		for(j=0;j<elem-1;j++)
		{
			if (a[j]>a[j+1])// se hace el cambio
			{
				//aux=2
				aux= a[j+1];
				//2=5
				a[j+1]=a[j];
				//5 a[j] = aux 2
				a[j]= aux;
				//2 5			
			}
		}
	}
	printf("\nArreglo ordenado con burbuja\n");
}

