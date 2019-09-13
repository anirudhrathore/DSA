//
//  main.cpp
//  Linear Search
//
//  Created by Anirudh Singh Rathore on 10/09/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int item, a[10], pos = 0, i, n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the array : ";
    for (i=0; i<n; i++) {
        cin>>a[i];
    }
    cout<<"Tne entered array is : ";
    for (i=0; i<n; i++) {
        cout<<a[i]<<", ";
    }
    cout<<endl;
    cout<<"Enter the element you want to find : ";
    cin>>item;
    for (i=0; i<n; i++) {
        if(a[i]==item)
        {
            pos = i + 1;
            cout<<"Item found at location : "<<pos<<endl;
        }
    }
        if(pos==0)
        {
            cout<<"The element could not be found !"<<endl;
        }
    return 0;
}
