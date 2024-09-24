#include <stdio.h>
#include "encrypt.h"

int main(int argc, char *argv[]){
	if (argc > 1){
		encrypt_string(argv[1]);

		// Save (ToDo)

	} else printf("Error: More parameters expected.\n");

	return 0;
}
