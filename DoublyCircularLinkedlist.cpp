//doubly circular linked list 

#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int info;
    struct Node* next,*prev;
}*pthis,*pnew,*ptemp,*head;
int data,choice;
void create(){
  //Double circular linked list creation
    cout<<"Enter data: ";
    cin>>data;
    pnew=new(struct Node);
    pnew->info=data;
}
void insert_begin(){

    if(head->next==head)
    {
        head->next=pnew;
                pnew->prev=head;
        pnew->next=head;
        head->prev=pnew;
    }
    else{
        ptemp=head->next;
        head->next=pnew;
        pnew->prev=head;
        pnew->next=ptemp;
        ptemp->prev=pnew;
    }
}
void insert_end(){
    if(head->next==head)
    {
        head->next=pnew;
                pnew->prev=head;
        pnew->next=head;
        head->prev=pnew;
    }
    else {
        ptemp=head->prev;
        head->prev=pnew;
        pnew->next=head;
        pnew->prev=ptemp;
        ptemp->next=pnew;
    }
}

void del_begin(){
    if(head->next==head)
    {
        cout<<"List is empty"<<endl;
    }
    else {
        ptemp=head->next->next;
        cout<<"Deleted element is: "<<head->next->info<<endl;
        delete(head->next);
        head->next=ptemp;
        ptemp->prev=head;
    }
}
void del_end(){
    if(head->next==head)
    {
        cout<<"List is empty"<<endl;
    }
    else {
        ptemp=head->prev->prev;
        cout<<"Deleted element is: "<<head->prev->info<<endl;
        delete(head->prev);
        head->prev=ptemp;
        ptemp->next=head;
    }
}
void display() {
    if (head->next == head) {
        cout << "List is empty" << endl;
        
    }

    pthis = head->next;   

    while (pthis->next != head) {
        cout << pthis->info << " ";
        pthis = pthis->next;
    }

    cout << pthis->info << endl;
}
int main(){
      head=new(struct Node);
    head->info=0;
    head->next=head;
    head->prev=head;
    while(1){
        cout<<"1.Insert at begin\n";
        cout<<"2.Insert at end\n";
        cout<<"3.Delete from begin\n";
        cout<<"4.Delete from end\n";
        cout<<"5.Display\n";
        cout<<"6.Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                create();
                insert_begin();
                break;
            case 2:
                create();
                insert_end();
                break;
            case 3:
                del_begin();
                break;
            case 4:
                del_end();
                break;
            case 5:
            display();
                break;
            case 6:
                exit(0);
                break;
            
        }
    }
    return 0;
}