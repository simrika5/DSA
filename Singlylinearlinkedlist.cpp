#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int info;
    node *next;
};

node *pfirst = NULL, *pthis, *pnew, *ptemp;
int count = 0, data, choice;

void create() {
    pnew = new node;
    cout << "Enter data: ";
    cin >> data;
    pnew->info = data;
    pnew->next = NULL;
}

void insertbeg() {
    if (pfirst == NULL) {
        pfirst = pnew;
    } else {
        pnew->next = pfirst;
        pfirst = pnew;
    }
    count++;
}

void insertend() {
    if (pfirst == NULL) {
        pfirst = pnew;
    } else {
        pthis = pfirst;
        while (pthis->next != NULL) {
            pthis = pthis->next;
        }
        pthis->next = pnew;
    }
    count++;
}

void deletebeg() {
    if (pfirst == NULL) {
        cout << "List empty\n";
        return;
    }
    ptemp = pfirst;
    cout << "Deleted data: " << pfirst->info << endl;
    pfirst = pfirst->next;
    delete ptemp;
    count--;
}

void deleteend() {
    if (pfirst == NULL) {
        cout << "List empty\n";
        return;
    }
    if (pfirst->next == NULL) { // only one node
        cout << "Deleted data: " << pfirst->info << endl;
        delete pfirst;
        pfirst = NULL;
    } else {
        pthis = pfirst;
        while (pthis->next->next != NULL) {
            pthis = pthis->next;
        }
        cout << "Deleted data: " << pthis->next->info << endl;
        delete pthis->next;
        pthis->next = NULL;
    }
    count--;
}

void display() {
    if (pfirst == NULL) {
        cout << "List is empty\n";
        return;
    }
    pthis = pfirst;
    cout << "List elements:\n";
    while (pthis != NULL) {
        cout << pthis->info << " ";
        pthis = pthis->next;
    }
    cout << endl;
}

int main() {
    while (1) {
        cout << "\n1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Delete at beginning\n";
        cout << "4. Delete at end\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                create();
                insertbeg();
                break;
            case 2:
                create();
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