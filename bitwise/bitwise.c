#include "bitwise.h"

void toUpper(char string[]){
	for( ; *string; string++){
                if(*string >= 97 && *string <= 122)
                        *string = *string & 0x5F;
        }
}

