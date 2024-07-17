#include <stdio.h>
#include <stdlib.h>
void merge(int A[], int left, int mid, int right);
void merge_sort(int A[], int left, int right);
void merge_sort(int A[], int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		merge_sort(A, left, mid);      
		merge_sort(A, mid + 1, right); 
		merge(A, left, mid, right);    
	}
}
void merge(int A[], int left, int mid, int right) {
	int n1 = mid - left + 1;    
	int n2 = right - mid;       
	int *L = (int *)malloc(n1 * sizeof(int));
	int *R = (int *)malloc(n2 * sizeof(int));
	for (int i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}
	for (int j = 0; j < n2; j++) {
		R[j] = A[mid + 1 + j];
	}
	int i = 0;  
	int j = 0;  
	int k = left; 

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		}
		else {
			A[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		A[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		A[k] = R[j];
		j++;
		k++;
	}
}


void print_array(int A[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}


int main() {
	int A[] = { 12, 11, 13, 5, 6, 7 };
	int n = sizeof(A) / sizeof(A[0]);

	printf("Original array: \n");
	print_array(A, n);

	merge_sort(A, 0, n - 1);

	printf("Sorted array: \n");
	print_array(A, n);
	getchar();
	return 0;
}
