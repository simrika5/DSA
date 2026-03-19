#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int info;
    struct Node* next,*prev;
}*pfirst=NULL,*pthis,*pnew,*plast=NULL,*ptemp,*ptemp1;
int data,choice;
void create(){
    cout<<"Enter data: ";
    cin>>data;
    pnew=new(struct Node);
    pnew->info=data;
}
void insert_begin(){

    if(pfirst==NULL)
    {
        pfirst=pnew;
        plast=pnew;
        pfirst->next=NULL;
        pfirst->prev=NULL;
    }
    else {
       
       pnew->prev=NULL;
        pnew->next=pfirst;
        pfirst->prev=pnew;
        pfirst=pnew;
       
    }
}
    void insert_end(){
        if(pfirst==NULL)
        {
            pfirst=pnew;
            plast=pnew;
            pfirst->next=NULL;
            pfirst->prev=NULL;
        }
        else {
            plast->next=pnew;
            pnew->prev=plast;
            pnew->next=NULL;
            plast=pnew;
        }
    }
    
  
    void display(){
        pthis=pfirst;
        while(pthis!=NULL)
        {
            cout<<pthis->info<<" ";
            pthis=pthis->next;
        }
        cout<<endl;
    }
    void delete_begin(){
        if(pfirst==NULL)
        {
            cout<<"List is empty"<<endl;
        }
        else if(pfirst->next==NULL)
        { cout<<"Deleted element is: "<<pfirst->info<<endl;
        delete(pfirst);
            pfirst=NULL;
            plast=NULL;
        }
        else {
            ptemp=pfirst->next;
            cout<<"Deleted element is: "<<pfirst->info<<endl;
            delete(pfirst);
            pfirst=ptemp;
            pfirst->prev=NULL;}
        }
    void delete_end(){
        if(pfirst==NULL)
        {
            cout<<"List is empty"<<endl;
        }
        else if(pfirst->next==NULL)
        { cout<<"Deleted element is: "<<pfirst->info<<endl;
        delete(pfirst);
            pfirst=NULL;
            plast=NULL;
        }
        else {
            ptemp=plast->prev;
            cout<<"Deleted element is: "<<plast->info<<endl;
            delete(plast);
            ptemp->next=NULL;
            plast=ptemp;
            }
        }
        
    int main(){
        while(1)
        {
            cout<<"1.Insert at begin\n";
            cout<<"2.Insert at end\n";
            cout<<"3.Display\n";
            cout<<"4.Delete at begin\n";
            cout<<"5.Delete at end\n";
            cout<<"6.Exit\n";
            cout<<"Enter your choice: ";
            cin>>choice;
            switch(choice)
            {
                case 1: create();
                        insert_begin();
                        break;
                case 2: create();
                        insert_end();
                        break;
             
                case 3: display();
                        break;
                case 4: delete_begin();
                        break;
                case 5: delete_end();
                        break;
               
                case 6: exit(0);
            }
        }
    }
