#include<stdio.h>

int main()
{
	//declaration of 3 variables
	int x = 3;
	int y = 7;
	int aux;

	//change values between X and Y
	aux = x;
	x = y;
	y = aux;

	//show X and Y values
	printf("x: %d, y: %d", x, y );
}
