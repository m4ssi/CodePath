#include <stdio.h>
#include <string.h>

#include "file.h"

void print_freq ( float * freq)	{
	 
	for (int i = 0; i < 16; i++)	{
		printf ( "[%03d] %2.2f [%03d] %2.2f [%03d] %2.2f [%03d] %2.2f [%03d] %2.2f [%03d] %2.2f [%03d] %2.2f [%03d] %2.2f \n", 
				(int)(i*8), freq[(i*8)],
				(int)(i*8)+1, freq[(i*8)+1],
				(int)(i*8)+2, freq[(i*8)+2],
				(int)(i*8)+3, freq[(i*8)+3],
				(int)(i*8)+4, freq[(i*8)+4],
				(int)(i*8)+5, freq[(i*8)+5],
				(int)(i*8)+6, freq[(i*8)+6],
				(int)(i*8)+7, freq[(i*8)+7]);		
	}
	printf ("\n");	
}

void asci_freq ( char * file, float freq[128])	{
	int lu = strlen ( file);
	for (int i = 0; i < lu; i++)
		freq[ (int)file[i]]++;
		
	for (int i = 0; i < 128; i++)
		freq[i] = (freq[i]/lu)*100;
}

int main_func ( int argc, char ** argv)	{
	char * file = init_file ( argv[1]);
	read_file ( argv[1], file);
	float freq[128] = {0};
	asci_freq ( file, freq);
	print_freq ( freq);
	free_file ( file);
	return 0;
}
