#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>


char * init_file ( const char * path)	{
	struct stat sb;
	if ( (stat ( path, &sb)) == -1) return NULL;
	char * file = (char *) malloc ( (sb.st_size+1) * sizeof ( char));
	return file;
}

void read_file ( const char * path, char * file)	{
	FILE * f = fopen ( path, "r");
	char c = '\0';
	while ( ( c = fgetc ( f)) != EOF)
		*(file++) = c;
	*(file++) = '\0';	
	fclose ( f);
}

void free_file ( char * file)	{
	if ( file)
		free ( file);
}
