#ifndef STACK_H
#define STACK_H

#define MAKS 20

typedef int infotype;

struct Stack {
    infotype info[MAKS + 1];   
    int Top;                   
};

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
bool push(Stack &S, infotype x);     
bool pop(Stack &S, infotype &x);     
void printInfo(Stack S);
void balikStack(Stack &S);

#endif