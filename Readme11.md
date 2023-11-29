Implementing a stack in C and C++, there are a few differences.

In C, you would typically use an array to represent the stack and write functions to perform stack operations, such as push and pop. Here's a simple example of a stack implementation in C:

```c
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int element) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow! Cannot push element.\n");
        return;
    }
    stack[++top] = element;
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow! Cannot pop element.\n");
        return -1;
    }
    return stack[top--];
}
```

In C++, you can take advantage of the built-in container class called `std::stack` in the `<stack>` header. It provides a more convenient way to implement a stack. Here's an example of a stack implementation using `std::stack` in C++:

```cpp
#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}
