#pragma once
#include "Node.h"
#define MAX_VTXS 256
class AdjListGraph {
protected:
	int size;
	char vertices[MAX_VTXS];
	Node* adj[MAX_VTXS];

public:
	AdjListGraph() : size(0){}
	~AdjListGraph() { reset(); }
	void reset(void) {
		for (int i = 0; i < size; i++)
			if (adj[i] != NULL) delete adj[i];
		size = 0;
	}
	bool isEmpty() { return (size == 0); }
	bool isFull() { return (size >= MAX_VTXS); }
	char getVertex(int i) { return vertices[i]; }

	void insertVertex(char val) {
		if (!isFull()) {
			vertices[size] = val;
			adj[size++] = NULL;
		}
		else printf("Error: 그래프 정점 개수 초과\n");
	}

	void insertEdge(int u, int v) {
		adj[u] = new Node(v, adj[u]);
		adj[v] = new Node(u, adj[v]);
	}

	void display() {
		printf("%d\n", size);
		for (int i = 0; i < size; i++) {
			printf("%c ", getVertex(i));
			for (Node* v = adj[i]; v != NULL; v = v->getLink())
			printf("  %c", getVertex(v->getId()));
			printf("\n");
		}
	}
	Node* adjacent(int v) { return adj[v]; }

};