#include <stdio.h>
int main()
{	

	
// Constantes:  #define NOMBRE valor;
#define edad3 45;

// Variables: Tipo NOMBRE = valor;
	int edad = 43;
	int edad2 = 3;

	float sueldo = 25.456;
	float bono = 4.560;

	edad += edad2;

	sueldo += bono;


	
	printf("Primer dato es :%d - El segundo dato es: %d", edad, edad2);
	printf("\nLa suma de edades es :%d", edad);
	printf("\n%d", sueldo);
	 
	return 0;
}
