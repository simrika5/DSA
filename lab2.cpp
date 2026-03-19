#include<iostream>
#include<string.h>
using namespace std;

int top = -1; 
int stack[5]; 

void push(int b){ 
    top = top + 1; 
    stack[top] = b; 
} 

int pop(){ 
    int c = stack[top]; 
    top = top - 1; 
    return c; 
} 

int main(){ 
    char postfix[50]; 
    cout << "Enter postfix expression (no spaces): " << endl; 
    cin >> postfix;   // Input: 53+ or 532+*

    int n = strlen(postfix);   
    int result = 0, A, B; 

    for(int i = 0; i < n; i++)
    { 
        // Check if character is a digit using ASCII 48-57
        if(postfix[i] >= 48 && postfix[i] <= 57){  
            int data = postfix[i] - 48;   // Convert char to int
            push(data); 
        } 
        else{ 
            switch(postfix[i])
            { 
                case '+':
                    A = pop(); 
                    B = pop(); 
                    result = B + A; 
                    break;

                case '-':
                    A = pop(); 
                    B = pop(); 
                    result = B - A; 
                    break;

                case '*':
                    A = pop(); 
                    B = pop(); 
                    result = B * A; 
                    break;

                case '/':
                    A = pop(); 
                    B = pop(); 
                    result = B / A; 
                    break;

                default:
                    cout << "invalid operator\n"; 
            } 
            push(result); 
        } 
    }
    
    cout << "the result is: " << pop() << endl; 
    return 0; 
}



//infix to postfix conversion

#include <iostream>
using namespace std;
#define maxsize 3

int main() {
    int stack[maxsize];
    int top = -1;
    int data;
    char ch;

    do {
        if(top == maxsize - 1) {
            cout << "Stack is full. Cannot push more elements.\n";
        } else {
            top = top + 1;
            cout << "Enter data to push: ";
            cin >> data;
            stack[top] = data;
            cout << data << " pushed to stack.\n";
        }

        cout << "Do you want to push more? (y/n): ";
        cin >> ch;

    } while(ch != 'n');

    cout << "Final stack elements: ";
    for(int i = 0; i <= top; i++) {
        cout << stack[i] << "\t";
    }
    cout << endl;

    return 0;
}
*/

#include<iostream>
#include<string.h>
using namespace std;

char infix[30], stack[30], post[30];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

// Returns precedence of operator
int check(char ch) {
    if(ch == '*' || ch == '/') return 2;
    if(ch == '+' || ch == '-') return 1;
    return 0;
}

int main() {
    char data;
    int pos = 0, i, n;

    cout << "Enter infix expression: ";
    cin >> infix;

    n = strlen(infix);

    cout << "Scanned char\tStack\tPostfix\n";

    for(i = 0; i < n; i++) {
        cout << infix[i] << "\t\t";

        if(infix[i] == '(') {
            push(infix[i]);
        }
        else if(infix[i] == ')') {
            while(stack[top] != '(') {
                data = pop();
                post[pos++] = data;
            }
            pop(); // remove '('
        }
        else if ((infix[i] >= 48 && infix[i] <= 57) || 
                 (infix[i] >= 65 && infix[i] <= 90) ||
                 (infix[i] >= 97 && infix[i] <= 122)) {
            post[pos++] = infix[i]; // operand goes to postfix
        }
        else { // operator
            while(top != -1 && stack[top] != '(' && check(stack[top]) >= check(infix[i])) {
                data = pop();
                post[pos++] = data;
            }
            push(infix[i]);
        }

        // Print current stack
        for(int k = 0; k <= top; k++) cout << stack[k];
        cout << "\t\t";

        // Print current postfix
        for(int j = 0; j < pos; j++) cout << post[j];
        cout << "\n";
    }

    // Pop remaining operators
    while(top != -1) {
        post[pos++] = pop();
    }
    post[pos] = '\n'; // terminate string

    cout << "\nPostfix = " << post << endl;

    return 0;
}