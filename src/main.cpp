#include <windows.h>
#include "main.h"

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>





int main()
{
	char input[9];
	uint8_t key;
	srand(time(0));

	printf("enter a 8 character string: ");
	fgets(input, 9, stdin);
	key = rand() % 256;

	printf("original: %s\n", input);

	xorEncrypt(input, key);
	printf("Encrypted: %s\n", input);

	printf("Random 8-bit key: 0x%02X\n", key);
	return 0;

}