//
//  main.cpp
//  Binary Search
//
//  Created by Anirudh Singh Rathore on 10/09/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, i, a[10], item, found = 0;
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
    int low = 0;
    int high = n - 1;
    int mid = (low + high)/2;
    for (i=0; i<n; i++) {
        if (item < a[mid]) {
            high = mid - 1;
        }
        else if (item > a[mid]) {
            low = mid + 1;
        }
        else if (item == a[mid]) {
            found = 1;
        }
        
    }
    cout<<"The element found at : "<<a[mid]<<endl;
    if (found==0) {
        cout<<"The number not found ";
    }
    return 0;
}
