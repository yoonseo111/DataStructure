#include "MaxHeap.h"

void main()
{
	MAXHEAP heap;

	heap.insert(0); heap.insert(10);
	heap.insert(-3); heap.insert(7);
	heap.insert(22); heap.insert(33);
	heap.insert(39); heap.insert(4);
	heap.insert(-9); heap.insert(-5);

	heap.display();
	printf("\n");
}