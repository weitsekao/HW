#include <stdio.h>

// ���k��ƹ�{�e����
void towersOfHanoi(int n, char source, char auxiliary, char destination) {
	if (n == 1) {
		printf("�N�L�l %d �q %c ���ʨ� %c\n", n, source, destination);
		return;
	}

	towersOfHanoi(n - 1, source, destination, auxiliary);
	printf("�N�L�l %d �q %c ���ʨ� %c\n", n, source, destination);
	towersOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
	int numDisks;

	printf("�п�J�e���𪺽L�l�ƶq: ");
	scanf_s("%d", &numDisks);

	towersOfHanoi(numDisks, 'A', 'B', 'C');

	return 0;
}