#include <stdlib.h>

int * init_vect ( int argc, char ** argv)	{
	int * vect = (int *) malloc (( argc-1)*sizeof(int));
	for (int i = 0; i < argc-1; i++)
		vect[i] = atoi ( argv[i+1]);
	return vect;
}

void free_vect ( int * vect)	{
	free ( vect);
}
