#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

//definition (logic of a function)
void xorEncrypt(char* input, uint8_t key) {
	while (*input) {
		*input ^= key;
		input++;
	}
}




		
