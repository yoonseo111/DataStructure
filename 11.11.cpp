#include "AdjListGraph.h"
#include "CircularQueue.h"

void BFS(int v) {
	visited[v] = true;
	printf("%c ", getVertex(v));

	CircularQueue que;
	que.enqueue(v);

	while (!que.isEmpty()) {
		int v = que.dequeue();
		for (int w=0;w<size;w++)
			if (isLinked(v, w) && visited[w] == false) {
				visited[w] = true;
				printf("%c ", getVertex(w));
				que.enqueue(w);
			}
	}
}