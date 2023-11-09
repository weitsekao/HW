#include <stdio.h>

// 遞歸函數實現河內塔
void towersOfHanoi(int n, char source, char auxiliary, char destination) {
	if (n == 1) {
		printf("將盤子 %d 從 %c 移動到 %c\n", n, source, destination);
		return;
	}

	towersOfHanoi(n - 1, source, destination, auxiliary);
	printf("將盤子 %d 從 %c 移動到 %c\n", n, source, destination);
	towersOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
	int numDisks;

	printf("請輸入河內塔的盤子數量: ");
	scanf_s("%d", &numDisks);

	towersOfHanoi(numDisks, 'A', 'B', 'C');

	return 0;
}