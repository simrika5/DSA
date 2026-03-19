
//Singly Circular Linked list 
#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int data;
     struct node *next;
};

node *pfirst = NULL, *plast = NULL, *pnew, *pthis, *ptemp;
int choice;


void create() {
    pnew = new (struct node);
    cout << "Enter data: ";
    cin>>pnew->data; 
}

// Insert at beginning
void insertbeg() {
    create(); 
    if (pfirst == NULL) {
        pfirst  = pnew;
        plast=pnew; 
        plast->next=pfirst;
       // pnew->next = pfirst;
    } 
    else {
        pnew->next = pfirst;
        pfirst = pnew;
        plast->next = pfirst;   
    }
}

// Insert at end
void insertend() {
    create();
    if (pfirst == NULL) {
        pfirst  = pnew;
        plast=pnew;
        plast->next = pfirst;
    } else {
        plast->next = pnew;
                plast = pnew;
        plast->next = pfirst;
    }
}

// Delete from beginning
void deletebeg() {
    if (pfirst == NULL) {
        cout << "List empty\n";
    }
    
    
    /*
    else if (pfirst->next == pfirst) { 
    cout << "Deleted data: " << pfirst->data << endl;
    ptemp = pfirst->next;        
    delete(pfirst);
    pfirst = ptemp;             
    plast->next = pfirst;        
}
    
*/


    else if (pfirst->next == pfirst) { 
        cout << "Deleted data: " << pfirst->data << endl;
        delete pfirst;
        pfirst = plast = NULL;
    } else { 
        ptemp = pfirst;
        cout << "Deleted data: " << ptemp->data << endl;
        pfirst = pfirst->next;
        plast->next = pfirst;
        delete ptemp;
    }
}
void deleteend() {
    if (pfirst == NULL) {
        cout << "List empty\n";
    
    }

   else  if (pfirst->next == pfirst) {
        cout << "Deleted data: " << plast->data << endl;
       delete pfirst;
        pfirst = NULL;
        plast= NULL;
    } else {
         cout << "Deleted data: " << plast->data << endl;
        pthis=pfirst; 
        while (pthis->next != plast) {
           pthis=pthis->next;
        }
        
        delete plast;
        plast = pthis;
        plast->next = pfirst;
    }
}

void display() {
    if (pfirst == NULL) {
        cout << "List empty\n";
    }
else{
    pthis=pfirst; 
    while(pthis->next!=pfirst){ 
        cout<<pthis->data<<"\t"; 
        pthis=pthis->next; 
    } 
    cout<<pthis->data<<endl; 
}
    
}
  
int main() {
    while (1) {
        cout << "\n1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Delete at beginning\n";
        cout << "4. Delete at end\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insertbeg();
                break;
            case 2:
                insertend();
                break;
            case 3:
                deletebeg();
                break;
            case 4:
                deleteend();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                cout << "Invalid choice\n";
        }
    }
    return 0;
}