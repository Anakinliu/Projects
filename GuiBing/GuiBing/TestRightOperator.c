#include <stdio.h>
void merge_sort_recursive(int arr[], int reg[], int start, int end) {
	if (start >= end)
		return;
	int len = end - start, mid = (len >> 1) + start;
	int start1 = start, end1 = mid;
	int start2 = mid + 1, end2 = end;
	merge_sort_recursive(arr, reg, start1, end1);
	merge_sort_recursive(arr, reg, start2, end2);
	int k = start;
	while (start1 <= end1 && start2 <= end2)
		reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
	while (start1 <= end1)
		reg[k++] = arr[start1++];
	while (start2 <= end2)
		reg[k++] = arr[start2++];
	for (k = start; k <= end; k++)
		arr[k] = reg[k];
}

int main()
{
	int len1 = 9;
	int len2 = 10;
	//printf("%d,%d", len1 >> 1, len2 >> 1);
	int a[6] = { 2,4,1,5,6,3 };
	int b[6];
	merge_sort_recursive(a, b, 0, 5);
	for (int i = 0; i < 6; i++) {
		printf("%d ", b[i]);
	}
}