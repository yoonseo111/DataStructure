#include "AdjListGraph.h"
#include "CircularQueue.h"

void BFS(int v) {
	visited[v] = true;
	printf("%c ", getVertex(v));

	CircularQueue que;
	que.enqueue(v);

	while (!que.isEmpty()) {
		int v = que.dequeue();
		for (Node* w = adj[v]; w != NULL; w = w->getLink()) {
			int id = w->getId();
			if (!visited[id]) {
				visited[id] = true;
				printf("%c ", getVertex(id));
				que.enqueue(id);
			}
		}
	}
}