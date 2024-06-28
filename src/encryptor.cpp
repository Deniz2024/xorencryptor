#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

//definition (logic of a function)
void xorEncrypt(char *input, uint8_t key) {
	const uint8_t inputSize = strlen(input);
	for (uint8_t i = 0; i < inputSize; i++) {
		input[i] ^= key;
	}
	


	while (*input) {
		*input ^= key;
		input++;
	}
}		
