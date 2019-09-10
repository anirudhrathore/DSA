//
//  main.cpp
//  Insertion of a number in an Array
//
//  Created by Anirudh Singh Rathore on 03/09/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, i, a[10], nw, nwpos;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the numbers in the array : "<<endl;
    for (i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"The entered array is : ";
    for (i=0; i<n; i++)
    {
        cout<<a[i]<<", ";
    }
    
    cout<<"\nEnter the new number you want to insert in the Array : ";
    cin>>nw;
    cout<<"Enter the position at which you want to add the new Number : ";
    cin>>nwpos;
    if (nwpos <=n)
    {
        for (i=5; i>nwpos; i--) {
            a[i] = a[i-1];
        }
        a[nwpos] = nw;
        cout<<"The updated Array is : ";
        for (i=0; i<n; i++) {
            cout<<a[i]<<", ";
        }
    }
    else
        cout<<"The position is not available."<<endl;
    
return (0);
}
