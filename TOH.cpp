#include<iostream>
using namespace std;
 
void TOH( int n, char S, char M, char D) 
{ 
if (n>0) 
{ 
TOH(n-1,S,D,M); 
cout<<"Move the Disk from "<<S<<" to "<<D<<endl; 
TOH(n-1,M,S,D); 
} 
}
int main() 
{ 
int n; 
cout<<"Enter the number of Disks: ";
cin>>n;
TOH(n, 'S', 'M', 'D'); 
return 0; 

} 