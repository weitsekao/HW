#include <stdio.h>

// 患耴ㄧ计璸衡计
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

	printf("叫块┏计㎝计: ");
	scanf_s("%d %d", &base, &exponent);

	int result = power(base, exponent);

	printf("%d  %d Ωよ琌: %d\n", base, exponent, result);

	return 0;
}