#include <stdlib.h>
#include <stdio.h>

int primality_test ( long long n)	{
	int is_prime = 1;
	for (long long i = 2; (i < n) && is_prime; i++)
		for (long long j = i; (j < n) && (is_prime = (i * j == n) ? 0 : 1) ; j++);
	return is_prime;
}

int prime ( long long n)	{
	if ( n == 1 || n == 2)	return 1;
	else if ( n == 0)		return 0;
	else					return primality_test ( n);
}

int main_func ( int argc, char ** argv)	{
	
	if ( prime ( atoll ( argv[1]) ) )	printf ("%s is prime\n", argv[1]);
	else						printf ("%s isn't prime\n", argv[1]);
	return 0;
}
