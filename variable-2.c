#include<stdio.h>

int main()
{
	//variable declaration
	int x = 3, y = 7;

	//change X and Y values
	x = x + y;
	y = x - y;
	x = x - y;

	//show values
	printf("x: %d, y: %d", x, y);
}
