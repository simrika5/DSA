/* #include<iostream>
#include<stdlib.h> 
using namespace std; 
#define maxsize 3
int main(){ 
    int stack[maxsize]; 
    int top=-1; 
    int choice,data,i; 
    char ch; 
    do{ 
        cout<<"1.Push\n 2.Pop\n 3.Display\n 4.Exit\n"; 
        cout<<"Enter your choice:"; 
        cin>>choice; 
        switch(choice){ 
            case 1:
            if(top==maxsize-1){ 
                cout<<"stack is full."; 
            }
            else{
                top=top+1; 
                cout<<"enter data:"; 
                cin>>data;
                stack[top]=data; 

            }

            break; 
            case 2:
            if(top<0){ 
                cout<<"stack empty\n"; 
            }
            else{
                data=stack[top]; 
                cout<<"deleted data is"<<data; 
                top=top-1; 
            }
            break;
            case 3: 
            if(top==-1){ 
                cout<<"stack is empty."; 
            } 
            else{ 
                for(i=0;i<=top;i++){
                    cout<<stack[i]<<"\t"; 
                }
            }

        break; 
        case 4:
        exit(0); 
        break;
        default:
        cout<<"invalid choice"; 

            }
            cout<<"do you want to continue?\n"; 
            cin>>ch; 
        
            }
while(ch!='n');   
    return 0;
}                */



//For Pushing elements in stack and display the stack elements 
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