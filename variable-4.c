#include <stdio.h>

int main()
{
	char c;
	int x;
	double d;

	printf("Introduza um caracter: ");
	scanf("%c", &c);
	printf("Introduza um inteiro: ");
	scanf("%d", &x);
	printf("Introduza um real: ");
	scanf("%lf", &d);

	printf("Os valores introduzidos foram: Caracter %c, Inteiro %d e Real %f", c, x, d);
}
