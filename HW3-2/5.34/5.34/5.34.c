#include <stdio.h>

// ���k��ƭp�����
int power(int base, int exponent) {
	if (exponent == 0) {
		return 1;
	}
	else {
		return base * power(base, exponent - 1);
	}
}

int main() {
	int base, exponent;

	printf("�п�J���ƩM����: ");
	scanf_s("%d %d", &base, &exponent);

	int result = power(base, exponent);

	printf("%d �� %d ����O: %d\n", base, exponent, result);

	return 0;
}