#include <stdlib.h>
#include <stdio.h>

#include "utils.h"


int main ( int argc, char ** argv)	{

#ifdef SUM_VERSION
	int * vect = init_vect ( argc, argv);
#endif

#if defined(SUM_VERSION) && SUM_VERSION==0
	printf ("Sum : %d\n", sum( vect, argc-1, 0, 1));
#endif

#if defined(SUM_VERSION) && SUM_VERSION==1
	printf ("Oven Sum : %d\n", sum( vect, argc-1, 0, 2));
	printf ("Odd Sum : %d\n", sum( vect, argc-1, 1, 2));
#endif

#ifdef SUM_VERSION
	free_vect ( vect);
#endif
	
	return 0;
}
