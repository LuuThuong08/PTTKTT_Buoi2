#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int Tong1nKoDeQui(int arr[], int low, int high) {
	if (low == high) {
		return arr[low];
	}

	int mid = (low + high) / 2;
	int left_sum = Tong1nKoDeQui(arr, low, mid);
	int right_sum = Tong1nKoDeQui(arr, mid + 1, high);

	return left_sum + right_sum;
}

int main() {
	int chon;
	int n;
	do
	{
		printf("/n---Menu---");
		printf("/n1.TinhMangKoDeQui");

		printf("/nNhap lua chon:");
		scanf("%d", &chon);
		switch (chon)
		{
		case 1:{
			printf("/nNhap n");
			scanf("%d", &n);

			int *arr = (int *)malloc(n * sizeof(int)); 

			printf("/nNhap cac phan tu cua mang:\n");
			for (int i = 0; i < n; i++) {
				scanf("%d", &arr[i]);
			}
			int sum = Tong1nKoDeQui(arr, 0, n - 1);
			printf("Tong: %d\n", sum);
		}break;
		default:
			break;
		}
	} while (chon != 0);
	
	
	getchar();
	return 0;
}

