#include <iostream>
#include <conio.h>

/*
Conjetura de Collatz-Conjetura 3n+1-Conjetura de Ulam
*******************************************************
Se aplica a cualquier número entero positivo:

Si el numero es par, se divide entre 2.
Si el numero es impar, se multiplica por 3 y se suma 1.

La conjetura dice que para cualquier numero introducido siempre llegaremos al ciclo 4,2,1

mas info=> https://es.wikipedia.org/wiki/Conjetura_de_Collatz

*/

int main() {

	int n;
	
	printf("Introduzca un numero para comenzar: ");
	scanf_s("%d", &n);
	printf("Comenzando con n= %d=> ",n);
	
		while (!_kbhit()) {
			if (n % 2 == 0)
				//Si n es par..
				n = n / 2;
			else
				//Si n es impar
				n = n * 3 + 1;
			
			printf("%d ", n);
			
		}
	//pulsamos cualquier tecla para ver el ciclo
	system("pause");
	return 0;
}