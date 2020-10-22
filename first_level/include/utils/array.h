#ifndef _H_ARRAY_
#define _H_ARRAY_
// Allocate memory for a vector and fill it with random values
// \param argc		number of arguments recieved by main programme
// \param argv		vector of strings (arguments)
// \ret				pointer on int filled used as an array
int * init_vect ( int argc, char ** argv);

// Free the memory used by a pointer
// Equivalent to free ( vect);
// \param vect		pointer to the memory to be freed
void free_vect ( int * vect); _H_ARRAY_

#endif
