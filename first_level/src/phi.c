#include <stdio.h>

double phi ( void)	{
	unsigned long long n1 = 1, n2 = 1;
	
	// Fibonacci(n) with n= ULL_MAX
	for (n1 = 1, n2 = 1; (n2 + n1) > n2; n1=(n2=n1+n2) -n1);
	printf ("%llu %llu\n", n1, n2);
	return (double)n2/n1;
}

int main_func ( int argc, char ** argv)	{
	
	printf ("%f\n", phi());
	return 0;
}
