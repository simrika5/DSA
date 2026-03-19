#include<iostream>
using namespace std;
struct node{
    int info;
    struct node* lchild;
    struct node* rchild;
}*root=NULL,*pthis,*ppthis,*pnew;

void bst()
{int data;
    pnew=new(struct node);
    cout<<"Enter the value to be inserted: ";
    cin>>data;
    pnew->info=data;
    pnew->lchild=NULL;
    pnew->rchild=NULL;
    if(root==NULL)
        root=pnew;
    else
    {
        pthis=root;
        while(pthis!=NULL)
        {
            ppthis=pthis;
            if(pnew->info<pthis->info)
               {
                pthis=pthis->lchild;
            if(pthis==NULL)
        { ppthis->lchild=pnew;
        }
                }
            else if(pnew->info>pthis->info)
               {pthis=pthis->rchild;
            if(pthis==NULL)
                   { ppthis->rchild=pnew;
                     }
        }
        else
        {
            cout<<"Duplicate node"<<endl;

        break;
    }
}
}
}
 void inorder(struct node* p)
 {
     if(p!=NULL)
     {
         inorder(p->lchild);
         cout<<p->info<<" ";
         inorder(p->rchild);
     } }
     void preorder(struct node* p)
     {
         if(p!=NULL)
         {
             cout<<p->info<<" ";
             preorder(p->lchild);
             preorder(p->rchild);
         }
     } void postorder(struct node* p)
     {
         if(p!=NULL)
         {
             postorder(p->lchild);
             postorder(p->rchild);
             cout<<p->info<<" ";
         }
     }
    
      void search()
      {
        int data;
        cout<<"Enter the value to be searched: ";
        cin>>data;
        if(root==NULL)
        {
            cout<<"Tree is empty"<<endl;
            return;
        } 
        pthis=root;
        while(pthis!=NULL)
        {
            if(data<pthis->info)
            {
                pthis=pthis->lchild;
            }
            else if(data>pthis->info)
            {
                pthis=pthis->rchild;
            }
            else
            {
                cout<<"Data is found"<<endl;
                break;
            }
            if(pthis==NULL)
            {
                cout<<"Data is not found"<<endl;
            }
    }
}
    int main()
        { int n;
            cout<<"Enter the number of nodes: ";
            cin>>n;
            for(int i=0;i<n;i++)
            {
                bst();
            }
            cout<<"Inorder traversal: ";
            inorder(root);
            cout<<endl;
            cout<<"Preorder traversal: ";
            preorder(root);
            cout<<endl;
            cout<<"Postorder traversal: ";
            postorder(root);
            cout<<endl;
            search();
            return 0;

        }