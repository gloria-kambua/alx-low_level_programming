#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n,x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	//getting modulos of n
	x=n%10;
	printf("The last digit of the number %d is %d\n"n,x);

	return (0);
}
