#include <stdio.h>

// ���k��ƭp�ⴴ�i�����ƦC
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

	printf("�п�J���i�����ƦC������: ");
	scanf_s("%d", &n);

	printf("���i�����ƦC���� %d ���O: %d\n", n, fibonacci(n));

	return 0;
}