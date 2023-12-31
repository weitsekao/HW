#include <stdio.h>

// 遞歸函數計算指數
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

	printf("請輸入底數和指數: ");
	scanf_s("%d %d", &base, &exponent);

	int result = power(base, exponent);

	printf("%d 的 %d 次方是: %d\n", base, exponent, result);

	return 0;
}