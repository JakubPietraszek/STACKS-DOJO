#include<iostream>
class Stack {
public:
	int size;
	int* st = new int(size);
	int top = -1;
	Stack(int size) {
		this->size = size;
	}
	void push(int item) {
		top++;
		*(st + top) = item;
	}
	int pop() {
		int item;
		item = *(st + top);
		top--;
		return item;
	}
	int isempty() {
		if (top == -1) return 1;
		else return 0;
	}
	void peek() {
		if (isempty()) printf("\nStack Underflow");
		else printf("\n%d is at stack[top]", *(st + top));
	}
};
int main() {
	Stack stack(5);
	return 0;
}