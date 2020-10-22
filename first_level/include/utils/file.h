#ifndef _H_FILE_
#define _H_FILE_

// Init a pointer to store a fill
// \param path		pathname of the file
// \return			pointer on char sized with the size of char to read
char * init_file ( const char * path);

void read_file ( const char * path, char * file);

void free_file ( char * file);

#endif
