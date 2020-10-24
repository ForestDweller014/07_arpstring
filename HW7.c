#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

double average(int *arr, int size) {
	int i;
	double sum = 0;
	for (i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

int copy(int *arr1, int *arr2, int size) {
	int i;
	for (i = 0; i < size; i++) {
		arr2[i] = arr1[i];
	}
	return 0;
}

int length(char *s) {
	int i = 0;
	while (*(s + i)) {
		i++;
	}
	return i;
}

int main() {
	int arr1[10];
	srand(time(NULL));
	int i;
	printf("Array 1:\n");
	for (i = 0; i < 9; i++) {
		arr1[i] = rand();
		printf("%d, ", arr1[i]);
	}
	arr1[9] = rand();
	printf("%d\n", arr1[9]);

	int arr2[10];
	printf("\nArray 2:\n");
	for (i = 0; i < 9; i++) {
		arr2[i] = rand();
		printf("%d, ", arr2[i]);
	}
	arr2[9] = rand();
	printf("%d\n", arr2[9]);

	printf("\nAverage of array 1:\n");
	printf("%g\n", average(arr1, 10));

	copy(arr1, arr2, 10);
	printf("\nArray 1 after contents of array 1 are copied into array 2:\n");
	for (i = 0; i < 9; i++) {
		printf("%d, ", arr1[i]);
	}
	printf("%d\n", arr1[9]);

	printf("\nArray 2 after contents of array 1 are copied into it:\n");
	for (i = 0; i < 9; i++) {
		printf("%d, ", arr2[i]);
	}
	printf("%d\n", arr2[9]);

	printf("\nLength of the string literal \"Hello\":\n");
	printf("%d\n", length("Hello"));

	char s1[100] = "Johnny";
	char s2[100] = "Appleseed";

	printf("\ns1: %s", s1);
	printf("\ns2: %s\n", s2);

	printf("\ns1 compared to s2:\n");
	printf("%d\n", strcmp(s1, s2));

	printf("\ns2 concatenated to s1:\n");
	printf("%s\n", strcat(s1, s2));

	printf("\ns2 copied into s1:\n");
	printf("%s\n", strcpy(s1, s2));

	printf("\nFirst occurence of char 'e' in s1:\n");
	printf("%p\n", strchr(s1, 'e'));
	return 0;
}