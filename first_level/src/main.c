#include <stdlib.h>
#include <stdio.h>

#ifdef SUM_VERSION
#include "sum.h"
#endif

#ifndef SUM_VERSION
#include "file.h"
#endif

#include "common.h"


#if defined(SUM_VERSION)

const char * usage = "./sum_version num_0 ... num_n";

#elif defined(LONG_WORD)

const char * usage = 
"./long_word [mode] [args or 'words']\n\
mode : -f : read from a file\n\
       -w : read args between ''";
#else

const char * usage = "No help";

#endif


#ifdef LONG_WORD

int main_func ( int argc, char ** argv)	{
	
	
	char * file = init_file ( argv[1]);
	read_file ( argv[1], file);
	printf ("%s", file);
	free ( file);
	return 0;
}
#endif

int main ( int argc, char ** argv)	{
	
	check_args ( argc, argv, usage);
	return main_func( argc, argv);
}
