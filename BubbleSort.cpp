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
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) 
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
        
        }
    }
    cout<<"\nPass"<<i+1<<":"<<"\t";
    for(int k=0;k<n;k++)
    cout<<a[k]<<"\t";
}

   cout <<"\nBubble Sort:\n";
    for (int i = 0; i < n; i++) {
        cout<<a[i]<< " ";
    }
    return 0;
}