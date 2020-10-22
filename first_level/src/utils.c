#include <stdlib.h>

int sum ( int * vect, int size, int start, int step)	{
	int sum = 0;
	for (int i = start; i < size; i+=step)
		sum += *(vect+i);
	return sum;
}

int * init_vect ( int argc, char ** argv)	{
	int * vect = (int *) malloc (( argc-1)*sizeof(int));
	for (int i = 0; i < argc-1; i++)
		vect[i] = atoi ( argv[i+1]);
	return vect;
}

void free_vect ( int * vect)	{
	free ( vect);
}
