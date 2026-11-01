#include <iostream>
#include "stack.h"
using namespace std;

void createStack(Stack &S) {
    S.Top = 0; 
}

bool isEmpty(Stack S) {
    return (S.Top == 0);
}

bool isFull(Stack S) {
    return (S.Top == MAKS);
}

bool push(Stack &S, infotype x) {
    if (isFull(S)) {
        return false;
    }
    S.Top = S.Top + 1;
    S.info[S.Top] = x;
    return true;
}

bool pop(Stack &S, infotype &x) {
    if (isEmpty(S)) {
        return false;
    }
    x = S.info[S.Top];
    S.Top = S.Top - 1;
    return true;
}

void printInfo(Stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong." << endl;
        return;
    }
    cout << "[TOP] ";
    for (int i = S.Top; i >= 1; i--) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack &S) {
    int n = S.Top;
    if (n <= 1) return;

    Stack bantu;
    createStack(bantu);
    infotype t, v;

    for (int i = 1; i <= n - 1; i++) {
        pop(S, t);
        for (int j = 0; j < n - i; j++) {
            pop(S, v);
            push(bantu, v);
        }
        push(S, t);
        while (!isEmpty(bantu)) {
            pop(bantu, v);
            push(S, v);
        }
    }
}