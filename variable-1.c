#include<stdio.h>

int main()
{
	//variables declaration
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
