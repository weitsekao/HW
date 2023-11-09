#include <stdio.h>

// ㄧ计ノ璸衡程そ计
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

// ㄧ计ノ璸衡程そ计
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
	int num1, num2;

	printf("叫块ㄢ俱计: ");
	scanf_s("%d %d", &num1, &num2);

	int result = lcm(num1, num2);

	printf("程そ计琌: %d\n", result);

	return 0;
}