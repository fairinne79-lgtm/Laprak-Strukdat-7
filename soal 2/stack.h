#ifndef STACK_H
#define STACK_H

#define Nil NULL

typedef int infotype;
typedef struct elmStack *address;

struct elmStack {
    infotype info;
    address next;
};

struct stack {
    address Top;
};

void createStack(stack &S);
bool isEmpty(stack S);
address alokasi(infotype X);          
void dealokasi(address &P);           
bool push(stack &S, infotype X);      
bool pop(stack &S, infotype &X);      
void printInfo(stack S);
void pushAscending(stack &S, infotype X);  
void clearStack(stack &S);                 
#endif