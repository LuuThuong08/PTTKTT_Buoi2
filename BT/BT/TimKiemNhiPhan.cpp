#include <stdio.h>

int BinarySearch(int A[], int n, int key) {
	int left = 0;
	int right = n - 1;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (A[mid] == key) {
			return mid; 
		}
		else if (key < A[mid]) {
			right = mid - 1; 
		}
		else {
			left = mid + 1; 
		}
	}

	return -1; 
}

int main() {
	int A[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 };
	int n = sizeof(A) / sizeof(int);
	int key = 23;

	int index = BinarySearch(A, n, key);

	if (index != -1) {
		printf("Tim thay key %d tai %d\n", key, index);
	}
	else {
		printf("khong tim thây key %d trong mang\n", key);
	}
	getchar();
	return 0;
	
}