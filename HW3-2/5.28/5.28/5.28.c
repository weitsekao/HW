#include <stdio.h>
#include <ctype.h>

int main() {
	char inputChar;

	printf("�п�J�@�Ӧr��: ");
	scanf_s(" %c", &inputChar);

	if (islower(inputChar)) {
		printf("�ഫ�᪺�r��: %c\n", toupper(inputChar));
	}
	else if (isupper(inputChar)) {
		printf("�ഫ�᪺�r��: %c\n", tolower(inputChar));
	}
	else {
		printf("��J�����O�r���C\n");
	}

	return 0;
}
