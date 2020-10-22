#ifndef _H_UTILS_
#define _H_UTILS_

// Sum of an array
// \param vect		integer array
// \param size		size of vect
// \param start		index of begining : 0 for all and Oven, 1 for Odd
// \param step		steps in the array : 1 for all, 2 for Odd & Oven
// \return			integer
int sum ( int * vect, int size, int start, int step);


// Allocate memory for a vector and fill it with random values
// \param argc		number of arguments recieved by main programme
// \param argv		vector of strings (arguments)
// \ret				pointer on int filled used as an array
int * init_vect ( int argc, char ** argv);

// Free the memory used by a pointer
// Equivalent to free ( vect);
// \param vect		pointer to the memory to be freed
void free_vect ( int * vect);

#endif
