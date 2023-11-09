#include <stdio.h>

// 患耴ㄧ计璸衡创猧ê计
int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int n;

	printf("叫块创猧ê计兜计: ");
	scanf_s("%d", &n);

	printf("创猧ê计材 %d 兜琌: %d\n", n, fibonacci(n));

	return 0;
}