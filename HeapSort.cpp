#include "MaxHeap.h"

void heapSort(int a[], int n) {
	MAXHEAP h;
	for (int i = 0; i < n; i++)
		h.insert(a[i]);
	for (int i = n - 1; i >= 0; i--)
		a[i] = h.remove().getKey();
}

#include <cstdlib>
void main() {
	MAXHEAP heap;
	int data[10];

	data[0] = 0; data[1] = 10;
	data[2] = -3; data[3] = 7;
	data[4] = 22; data[5] = 33;
	data[6] = 39; data[7] = 4;
	data[8] = -9; data[9] = 5;

	printf("\n정렬전: ");
	for (int i = 0; i < 10; i++)printf("%3d", data[i]);

	heapSort(data, 10);
	printf("\n정렬후: ");
	for (int i = 0; i < 10; i++)printf("%3d", data[i]);
	printf("\n");

}