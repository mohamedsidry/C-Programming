#include "main.h"


int addition(int a, int b)
{
	printf("Output : %d + %d = %d\n", a, b, a + b);

	return (a + b);
}



int subtraction(int a, int b)
{
	printf("Output : %d - %d = %d\n", a, b, a - b);

	return (a - b);
}


int division(int a, int b)
{
	printf("Output : %d / %d = %d\n", a, b, a / b);

	return (a / b);
}


int multiplication(int a, int b)
{
	printf("Output : %d * %d = %d\n", a, b, a * b);
	return (a * b);

}


int modulo(int a , int b)
{
	printf("Output : %d %% %d = %d\n", a, b, a % b);
	return (a % b);
}
