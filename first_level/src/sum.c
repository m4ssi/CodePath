#include <stdio.h>

#include "array.h"

int sum ( int * vect, int size, int start, int step)	{
	int sum = 0;
	for (int i = start; i < size; i+=step)
		sum += *(vect+i);
	return sum;
}

int main_func ( int argc, char ** argv)	{
	
	int * vect = init_vect ( argc, argv);

#if SUM_VERSION==0
	printf ("Sum : %d\n", sum( vect, argc-1, 0, 1));
#endif

#if SUM_VERSION==1
	printf ("Oven Sum : %d\n", sum( vect, argc-1, 0, 2));
	printf ("Odd Sum : %d\n", sum( vect, argc-1, 1, 2));
#endif

	free_vect ( vect);
	
	return 0;
}

