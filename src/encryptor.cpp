#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

void xorEncrypt(char* input, uint8_t key) {
	while (*input) {
		*input ^= key;
		input++;

	}
}




		
