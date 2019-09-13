//
//  main.cpp
//  Linear Search using Function
//
//  Created by Anirudh Singh Rathore on 10/09/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

int linear_search(int itm, int n, int a[])
{
    int i, pos = 0;
    for (i=0; i<n; i++) {
        if (a[i]==itm) {
            pos = i + 1;
            cout<<"The element is at position : "<<pos<<endl;
        }
    }
        if (pos==0) {
            cout<<"Element not found !";
        }
    return 0;
}

int main() {
    int n, i, a[10], item, x;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the array : ";
    for (i=0; i<n; i++) {
        cin>>a[i];
    }
    cout<<"The entered array is : ";
    for (i=0; i<n; i++) {
        cout<<a[i]<<", ";
    }
    cout<<"\nEnter the element you want to find : ";
    cin>>item;
    x = linear_search(item, n, a);
    
    return 0;
}
