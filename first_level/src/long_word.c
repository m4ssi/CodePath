#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "file.h"

void wordsEnds ( char * w, int * l, int * r)	{
	int tl = 0, tr = 0;
	for (unsigned int i = 0; i < strlen (w)+1; i++)	{
		if ( *(w+i) == ' ' || *(w+i) == ',' || *(w+i) == '.' || *(w+i) == ':' || *(w+i) == ';' || *(w+i) == '\0' || *(w+i) == '\n')	{
			*l = (*r-*l)<(tr-tl) ? tl : *l;
			*r = (*r-*l)<(tr-tl) ? tr : *r;
			tl = tr = tr+1;
		}
		else
			tr++;
	}
}

char * longest_word ( char * w)	{
	int l = 0, r = 0;
	wordsEnds ( w, &l, &r);
	
	char * lw = (char *) malloc (((r-l)+1)*sizeof(char));
	
	for (int i = 0; i < r-l; i++)
		lw[i] = w[i+l];
	lw[r-l] = '\0';
	return lw;
}


int main_func ( int argc, char ** argv)	{
	char * w = NULL;
	if ( argv[1][1] == 'w')
		w = argv[2];
	if ( argv[1][1] == 'f')	{
		w = init_file ( argv[2]);
		read_file ( argv[2], w);
	}
	char * lw = longest_word ( w);
	printf ("Tallest : %s\nSize : %ld\n", lw, strlen(lw));
	free ( lw);
	if ( argv[1][1] == 'f')
		free_file ( w);
	return 0;
}
