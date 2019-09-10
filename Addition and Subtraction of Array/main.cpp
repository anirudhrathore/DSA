//
//  main.cpp
//  Addition and Subtraction of Array
//
//  Created by Anirudh Singh Rathore on 03/09/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

int sum(int a[], int n)
{
    int sum = 0, i;
    for (i=0 ; i<n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int average(int s, int n)
{
    int a;
    a = s/n;
    return a;
}

int main() {
    int n, i, a[10], s, avg;
    cout<<"Enter the size of array : "<<endl;
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
    s = sum(a, n);
    cout<<"\nThe Sum of the array is : "<<s<<endl;
    avg = average(s, n);
    cout<<"The Average of the array is : "<<avg<<endl;
    return 0;
}
