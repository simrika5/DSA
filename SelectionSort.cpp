#include <iostream>
using namespace std;

int main() {
    int i,j,n,temp,a[10];
    cout << "Enter the number of elements: ";
    cin >> n;

        cout << "Enter element ";

    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (a[i] > a[j]) 
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
        
        }
    }
    cout<<"\nPass"<<i+1<<":"<<"\t";
    for(int k=0;k<n;k++)
    cout<<a[k]<<"\t";
}

   cout <<"\nSelection Sort:\n";
    for (int i = 0; i < n; i++) {
        cout<<a[i]<< " ";
    }
    return 0;
}