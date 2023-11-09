#include <stdio.h>
#include <ctype.h>

int main() {
	char inputChar;

	printf("請輸入一個字母: ");
	scanf_s(" %c", &inputChar);

	if (islower(inputChar)) {
		printf("轉換後的字母: %c\n", toupper(inputChar));
	}
	else if (isupper(inputChar)) {
		printf("轉換後的字母: %c\n", tolower(inputChar));
	}
	else {
		printf("輸入的不是字母。\n");
	}

	return 0;
}
