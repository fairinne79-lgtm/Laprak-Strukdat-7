#include <iostream>
#include "stack.h"
using namespace std;

void createStack(stack &S) {
    S.Top = Nil;
}

bool isEmpty(stack S) {
    return (S.Top == Nil);
}

address alokasi(infotype X) {
    address P = new elmStack;
    P->info = X;
    P->next = Nil;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

bool push(stack &S, infotype X) {
    address P = alokasi(X);
    if (P == Nil) return false;
    P->next = S.Top;
    S.Top = P;
    return true;
}

bool pop(stack &S, infotype &X) {
    if (isEmpty(S)) {
        return false;
    }
    address P = S.Top;
    X = P->info;
    S.Top = P->next;
    dealokasi(P);
    return true;
}

void printInfo(stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong." << endl;
        return;
    }
    cout << "[TOP] ";
    address P = S.Top;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void pushAscending(stack &S, infotype X) {
    stack bantu;
    createStack(bantu);
    infotype v;

    while (!isEmpty(S) && (S.Top)->info > X) {
        pop(S, v);
        push(bantu, v);
    }
    push(S, X);
    while (!isEmpty(bantu)) {
        pop(bantu, v);
        push(S, v);
    }
}

void clearStack(stack &S) {
    infotype v;
    while (!isEmpty(S)) {
        pop(S, v);
    }
    S.Top = Nil;
}