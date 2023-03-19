#include<stdio.h>

int main(){
	
	int a, b, o;
	float c, d;
	
	printf("Ingrese el primer numero entero: ");
	scanf("%d",&a);
	
	printf("Ingrese el segundo numero entero: ");
	scanf("%d",&b);
	
	printf("\nSeleccione que operacion aritmetica desea realizar:");
	printf("\n(1)..................... Suma");
	printf("\n(2)..................... Resta");
	printf("\n(3)..................... Multiplicacion");
	printf("\n(4)..................... Division");
	printf("\nOpcion: ");
	scanf("%d",&o);
	
	while(o < 1 || o > 4){
		
		printf("\n*Error al seleccionar la opcion*");	
		printf("\n\nSeleccione que operacion aritmetica desea realizar:");
		printf("\n(1)..................... Suma");
		printf("\n(2)..................... Resta");
		printf("\n(3)..................... Multiplicacion");
		printf("\n(4)..................... Division");
		printf("\nOpcion: ");
		scanf("%d",&o);
			
	}
	
	if(o == 1){
		
		printf("resultado de la suma: %d", a+b);
		
		
	}
	
	if(o == 2){
		
		printf("resultado de la resta: %d", ((a-b)*-1));
		
		
	}
	
	if(o == 3){
		
		printf("resultado de la multiplicacion: %d", a*b);
		
		
	}
	
	if(o == 4){
		
		c = a;
		d = b;
		
		printf("resultado de la division: %f", c/d);
		
		
	}
	
	return 0;
	
}
