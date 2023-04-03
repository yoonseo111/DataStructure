#include <iostream>
#include <stack>
using std::stack;
stack<int> myStack;
using namespace std;

int main() {
	std::stack<int> stack;
	int insertHeight = 0;
	int inputHeight = 0;

	std::cin >> insertHeight;

	for (int i = 0; i < insertHeight; i++) {
		std::cin >> inputHeight;
		stack.push(inputHeight);
	}

	for (int i = 0; i < insertHeight; i++) {
		if (stack.pop() > stack.top()) {
			int space = stack.top() - stack.pop();
			int egg = space * 1000;
		}
	}
}

