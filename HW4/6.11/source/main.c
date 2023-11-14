#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	srand(time(0) << 5);
	int len = rand() % 100 + 10;
	int *arr = malloc(len * sizeof(int)); // Dynamically allocate memory for the array

	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	printf("Original values:\n");
	for (int i = 0; i < len; i++) {
		arr[i] = rand() % INT_MAX;
		printf("%d ", arr[i]);
	}
	putchar('\n');

	printf("Sorted values:\n");
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}

	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}

	free(arr); // Free dynamically allocated memory
	return 0;
}
