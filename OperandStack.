#pragma once
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE	100

inline void error(const char* str) {
	fprintf(stderr, "%s\n", str);
	exit(1);
};

class OperandStack
{
	double	data[MAX_STACK_SIZE];
	int		top;
public:
	OperandStack() { top = -1; }
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE; }

	void push(double e) {
		if (isFull()) error("스택 포화 에러");
		data[++top] = e;
	}
	double pop() {
		if (isEmpty()) error("스택 공백 에러");
		return data[top--];
	}

	void display() {
		for (int i = 0; i <= top; i++) {
			int tmp = 0;
			if (top > tmp) tmp = top;
		}	
		printf("%2d\n", 3);
		printf("%2d\n", 1);
	}

};
