#if 0




#include <stdio.h>
#include <stdint.h>

void xorEncrypt(char* input, uint8_t key) {
	while (*input) {
		*input ^= key;
		input++;
	}
}



int main() {
	char input[9];
	uint8_t key;


	printf("Enter encrypted string:");
	if (fgets(input, sizeof(input), stdin) != NULL) {
		size_t len = strlen(input);
		if (len > 0 && input[len - 1] == '\n') {
			input[len - 1] = '\0';

		}
	}
	else {
		printf("error reading input. \n");
		return 1;
	}
	printf("Enter key:");
	if (scanf_s("%hhx", &key) != 1) {
		printf("error reading  hexadecimal input.\n");
		return 1;

	}

	xorEncrypt(input, key);
	printf("Decrypted: %s\n", input);

	return 0;


}


#endif //0