#include <stdlib.h>
#include <stdio.h>

#ifdef SUM_VERSION
#include "sum.h"
#endif

#ifdef LONG_WORD
#include "long_word.h"
#endif

#ifdef ASCI_FREQ
#include "long_word.h"
#endif

#ifdef PRIME
#include "prime.h"
#endif

#ifdef PHI
#include "phi.h"
#endif

#include "common.h"


#if defined(SUM_VERSION)

const char * usage = "./sum_version num_0 ... num_n";

#elif defined(LONG_WORD)

const char * usage = 
"./long_word [mode] [args or 'words']\n\
mode : -f : read from a file\n\
       -w : read args between ''";

#elif defined(ASCI_FREQ)

const char * usage = 
"./asci_freq pathname";

#elif defined(PRIME)

const char * usage = 
"./prime num(integer)";

#else

const char * usage = "No help";

#endif

int main ( int argc, char ** argv)	{
	
	check_args ( argc, argv, usage);
	return main_func( argc, argv);
}
