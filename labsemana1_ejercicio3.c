#include<stdio.h>
#include<stdlib.h>

void retrardo(){
	
	int i, j;
	
	for(i = 0; i < 10000; i++){
		
		for(j = 0; j < 10000; j++){
			
		}
		
	}
	
}

int main(){
	
	int i, j;
	
	printf("Barra de carga:\n\n");
	system("pause");
	system("cls");
	
	for(i = 0; i < 30; i++){
		
		printf("Cargando... \n");
		printf("==============================\n");
		
		for(j = 0; j < i; j++){
			
			printf("X");
			
		}
		
		printf("\n==============================\n");
		retrardo();
		system("cls");
		
	}
	
	printf("!Juego Cargado!");
	
	return 0;
	
}
