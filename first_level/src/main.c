#include <stdlib.h>
#include <stdio.h>

#ifdef SUM_VERSION
#include "sum.h"
#endif

#if defined(LONG_WORD)
#include "long_word.h"
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

int main ( int argc, char ** argv)	{
	
	check_args ( argc, argv, usage);
	return main_func( argc, argv);
}
