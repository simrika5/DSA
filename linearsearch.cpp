#include<iostream>
using namespace std;
int main()
{
    int n,i,a[10],data;
    cout<<"Enter the number of data: ";
    cin>>n;
    cout<<"Enter the data: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the data to be searched: ";
    cin>>data;
   i=0;
   while(i<n)
    {
        if(a[i]==data)
        {
            cout<<"Data found at index:\n"<<i<<endl;
            break;
        }
        i++;
    }
    if(i==n)
    {
        cout<<"Data not found"<<endl;
    }
    return 0;
}