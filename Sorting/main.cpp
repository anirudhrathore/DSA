//
//  main.cpp
//  Sorting
//
//  Created by Anirudh Singh Rathore on 17/09/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

void bubble(int a[], int n){
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"The sorted array using Bubble Sort is  :";
    for (int i=0; i<n; i++) {
        cout<<a[i]<<", ";
    }
}

void selection(int a[], int n){
    for (int i=0; i<n-1; i++)
    {
        int k;
        k = i;
        int min = a[i];
        for (int j=i+1; j<n; j++)
        {
            if (a[j]<min)
            {
                min = a[j];
                k = j;
            }
        }
        a[k] = a[i];
        a[i] = min;
    }
    cout<<"The sorted array using Selection Sort is  :";
    for (int i=0; i<n; i++) {
        cout<<a[i]<<", ";
    }
}
void insertion(int a[], int n){
    for (int i=1; i<n; i++) {
        int temp = a[i];
        int j = i - 1;
        while (j>=0 && a[j]>temp) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    cout<<"The sorted array using Insertion Sort is  :";
    for (int i=0; i<n; i++) {
        cout<<a[i]<<", ";
    }
}
int main() {
    int n, s, ch;
    int a[20];
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the array elements : ";
    for (int i = 0; i<n; i++) {
        cin>>a[i];
    }
    cout<<"The entered array is : ";
    for (int i=0; i<n; i++) {
        cout<<a[i]<<", ";
    }
    
    do{
    cout<<"Select the sorting method you want to perform : "<<endl<<"1 - Bubble Sort"<<endl<<"2 - Selection Sort"<<endl<<"3 - Insertion Sort"<<endl;
    cin>>s;
    switch (s) {
        case 1:
            bubble(a, n);
            break;
        case 2:
            selection(a, n);
            break;
        case 3:
            insertion(a, n);
            break;
        case 4:
            return 0;
        default:
            cout<<"Wrong Input";
            break;
    }
        cout<<"\nDo you want to continue? (press 1 to continue any other number to exit): "<<endl;
        cin>>ch;
    }while (ch==1);
    
    return 0;
}
