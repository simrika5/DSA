//Linear queue implementation 
#include <iostream>
#include<conio.h>
#include<stdlib.h>
#define max 3
using namespace std; 
int main(){
int rear=-1, front=-1; 
int queue[max]; 
int choice, data; 
while(1)
{ 
    cout<<"\n1.enqueue \n 2.dequeue \n 3.display \n 4.exit\n"; 
    cout<<"enter your choice:"; 
    cin>>choice; 
    switch(choice){ 
        case 1:
        if(rear==max-1){ 
            cout<<"q overflow!\n"; 
        } 
        else { 
            rear=rear+1; 
            if(front==-1){ 
                front=front+1; 
            } 
            cout<<"enter data: "; 
            cin>>data; 
            queue[rear]=data; 
        } 
        break; 
        
        case 2: 
        if(front==-1){ 
            cout<<"q is underflow\n"; 
        }
            else if(front>rear){ 
                front=-1; 
                rear=-1; 
            } 
            else{ 
                data=queue[front]; 
                cout<<"dequeued data is "<<data<<endl; 
                front=front+1; 
            } 
            
            break; 
           case 3: 
           if(front==-1){ 
               cout<<"queue is empty "; 
           } 
           else { 
               for (int i=front;i<=rear;i++){ 
                   cout<<queue[i]<<"\t"; 
               } 
           } 
           break; 
           
           case 4: 
           exit(0); 
           
           break; 
           
           default: 
           cout<<"Invalid choice.\n"; 
}
}

return 0; 
}

           
// Circular queue implementation

include <iostream>
#include<conio.h>
#include<stdlib.h>
#define max 3
using namespace std; 
int main(){ 
    int rear=-1, front=-1; 
    int queue[max]; 
    int choice, data; 
    while(1)
{ 
    cout<<"\n1.enqueue \n 2.dequeue \n 3.display \n 4.exit\n"; 
    cout<<"enter your choice:"; 
    cin>>choice; 
    switch(choice){ 
        case 1:
        if((rear==max-1 && front==0) || (front==rear+1)){ 
            cout<<"q overflow"; }
            else { 
                rear=(rear+1) % max; 
        
                if(front==-1){ 
                    front=0; 
                }
                cout<<"enter the data: "; 
                cin>>data; 
                queue[rear]=data; 
        }
                break; 
                
                case 2: 
                if(front==-1){ 
                    cout<<"q underflow"; 
                } 
                else if(front==rear){ 
                    cout<<"the dequeued data is "<<queue[front]; 
                    cout<<endl; 
                    front=-1; 
                    rear=-1; 
                } 
                else { 
                    data=queue[front]; 
                    cout<<"dequeued data is"<<data<<endl; 
                    front=(front+1) % max; 
                } 
                break; 
                case 3: 
                 if(front==-1){ 
                     cout<<"q is empty"; 
                 } 
                 else { 
                     int i=front; 
                     while(i!=rear){ 
                         cout<<queue[i]<<"\t"; 
                         i=(i+1)%max;
                     }
                     cout<<queue[i]<<endl;
                 }
                break; 
                
                
                case 4: 
                exit(0); 
                break; 
                default: 
                cout<<"invalid"; 
            } } 
            return 0; 
    }                 
                


