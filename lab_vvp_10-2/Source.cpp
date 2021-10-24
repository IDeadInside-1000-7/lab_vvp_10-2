#include <stdio.h>
int main()
{
	int A, B, C;
	printf("Enter A, B and C\n");
	printf("A = ");
	scanf("%i", &A);
	printf("B = ");
	scanf("%i", &B);
	printf("C = ");
	scanf("%i", &C);
	if (A < B && B < C)
		printf("True");
	else
		printf("False");


}