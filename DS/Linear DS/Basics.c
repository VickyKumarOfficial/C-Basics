/*

***SOME IMPORTANT POINTS TO BE NOTED***

4 operations are required for stack program:
    1. Push() - To insert data in the memory.
    2. pop() - To delete data from the memory.
    3. display() - to show the element.
    4. peek() - to show the top most data.



-> While performing push operation, top is increamented by 1.
-> Once stack becomes full, it's not possible to perform push operation.
-> Wether the stack has become full or not is tested with if (top == n-1) where n is the size of the stack.
-> While performing the pop operation top is decreamented by 1.
-> It is not possible to perform pop operation if stack is empty and it is tested if (top == -1)

How to write the code.

#include<stdio.h>

void push(int d){
    if (top==n-1) printf("Stack is Full!");
    else {
        top += 1;
        s[stop] = d;
    }
}

*/