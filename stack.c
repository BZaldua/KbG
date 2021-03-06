#include "definitions.h"

void Stack_Init(Stack *S)
{
    S->size = 0;
}

GLdouble * Stack_Top(Stack *S)
{
    if (S->size == 0) {
        fprintf(stderr, "Error: stack empty\n");
        return (void *)-1;
    } 

    return S->data[S->size-1];
}

void Stack_Push(Stack *S, GLdouble *d)
{
    if (S->size < 9999)
        S->data[S->size++] = d;
    else
        fprintf(stderr, "Error: stack full\n");
}

void Stack_Pop(Stack *S)
{
    if (S->size == 0)
        fprintf(stderr, "Error: stack empty\n");
    else
        S->size--;
}

