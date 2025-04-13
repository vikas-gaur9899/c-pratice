#include <stdio.h>

#define MAX 50

// Stack for operators
char stack[MAX];
int top = -1;

// Function to push an element to the stack
void push(char value) {
    if (top < MAX - 1) {
        stack[++top] = value;
    }
}

// Function to pop an element from the stack
char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return -1;
}

// Function to check the precedence of operators
int precedence(char c) {
    if (c == '+' || c == '-') {
        return 1;
    } else if (c == '*' || c == '/') {
        return 2;
    }
    return 0;
}

// Function to check if a character is an operand (number or letter)
int isOperand(char c) {
    return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

// Function to convert infix expression to postfix
void infixToPostfix(char *exp) {
    int i = 0;
    char ch;

    while ((ch = exp[i++]) != '\0') {
        // If the character is an operand, add it to the result
        if (isOperand(ch)) {
            printf("%c", ch);
        }
        // If the character is '(', push it to the stack
        else if (ch == '(') {
            push(ch);
        }
        // If the character is ')', pop and print until '(' is found
        else if (ch == ')') {
            while (top >= 0 && stack[top] != '(') {
                printf("%c", pop());
            }
            pop(); // Discard '('
        }
        // If the character is an operator
        else {
            while (top >= 0 && precedence(ch) <= precedence(stack[top])) {
                printf("%c", pop());
            }
            push(ch);
        }
    }

    // Pop all remaining operators from the stack
    while (top >= 0) {
        printf("%c", pop());
    }
}

int main() {
    char exp[MAX];
    
    printf("Enter infix expression: ");
    scanf("%s", exp);

    printf("Postfix expression: ");
    infixToPostfix(exp);
    
    return 0;
}
