#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_usage ( const char * s, int ex_code)	{
	printf ("%s\n", s);
	exit (ex_code);
}

void check_args ( int argc, char ** argv, const char * usage)	{
	if ( argc == 1)						print_usage ( usage, 1);
	if ( !strcmp ( argv[1], "--help"))	print_usage ( usage, 0);

#ifdef LONG_WORD
	if ( argc < 3)						print_usage ( usage, 1);
#endif

}
