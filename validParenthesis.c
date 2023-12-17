#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX_SIZE 100000

struct Stack{
    char arr[MAX_SIZE];
    int top;
};


void initialize(struct Stack *st){
    st->top =-1;
}

void push(struct Stack* stack , char element){
    if(stack->top == MAX_SIZE-1){
        return;
    }
    stack->arr[++stack->top] = element;
}

char pop(struct Stack* st){

    return st->arr[st->top--];

}

bool isEmpty(struct Stack* st){
    return st->top==-1;
}

bool isValid(char* s) {

    struct Stack stack;  
    initialize(&stack);

    for(int i=0;s[i]!='\0';i++){
        char currentChar = s[i];
        if (currentChar == '(' || currentChar == '{' || currentChar == '[') {
            push(&stack, currentChar);
        } 
         else if (currentChar == ')' || currentChar == '}' || currentChar == ']') {
            if (isEmpty(&stack)) {
                return false; 
            }

            char topChar = pop(&stack);
            if (!((currentChar == ')' && topChar == '(') ||
                (currentChar == '}' && topChar == '{') ||
                (currentChar == ']' && topChar == '['))) {
                return false;
            }
         }
    }  
    
    return isEmpty(&stack);

}