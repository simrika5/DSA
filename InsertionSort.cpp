#include<iostream>
using namespace std;
int main()
{ int i,j,k,temp,n,a[10];
cout<<"Enter the number of elements :";
cin>>n;
for(i=0;i<n;i++){
    cout<<"Enter elements \t"<<i+1<<":";
          cin>>a[i];
        
}
for(i=0;i<n;i++)
{ temp=a[i];
    for(j=i-1;j>=0;j--)
         {
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
             
                break;
            }
        
         }
            a[j+1]=temp;
}
cout<<"The elements after Insertion Sort are:"<<"\t";
    for(k=0;k<n;k++){
        cout<<a[k]<<"\t";
    }
return 0;

}