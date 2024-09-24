#include "encrypt.h"

void encrypt_char(char * c){
    unsigned char copy = *c;
    *c = (copy & SWAP_MASK) >> 1 | (copy & ~SWAP_MASK) << 1;
}

void encrypt_string(char * string){
    while (*string){
        encrypt_char(string);
        string++;
    }    
}
