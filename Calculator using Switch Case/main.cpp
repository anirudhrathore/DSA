//
//  main.cpp
//  Calculator using Switch Case
//
//  Created by Anirudh Singh Rathore on 26/08/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

int add(float n1, float n2)
{
    float ans;
    ans = n1 + n2;
    cout<<"The answer for Addition is : "<<ans<<endl;
}
int subtract(float n1, float n2)
{
    float ans;
    ans = n1 - n2;
    cout<<"The answer for Subtraction is : "<<ans<<endl;
}
int multiply(float n1, float n2)
{
    float ans;
    ans = n1 * n2;
    cout<<"The answer for Multiplication is : "<<ans<<endl;
}
int divide(float n1, float n2)
{
    float ans;
    ans = n1 / n2;
    cout<<"The answer for Division is : "<<ans<<endl;
}
int main() {
    char op;
    float ans=0;
    float n1;
    float n2;
    cout <<"Enter the operation from the following you want to perform : "<<endl;
    cout<<"1 for Addition"<<endl; cout<<"2 for Subtraction"<<endl; cout<<"3 for Multiplication"<<endl; cout<<"4 for Division"<<endl;
    cin >>op;
    cout <<"Enter the two numbers : ";
    cin >>n1;
    cin >>n2;
    
    switch (op) {
        case 1:
            ans=n1+n2;
            cout<<"The answer is "<<ans<<endl;
            break;
        case 2:
            ans=n1-n2;
            cout<<"The answer is "<<ans<<endl;
            break;
        case 3:
            ans=n1*n2;
            cout<<"The answer is "<<ans<<endl;
            break;
        case 4:
            ans=n1/n2;
            cout<<"The answer is "<<ans<<endl;
            break;
        default:
            cout <<"The value entered is false";
            break;
    }
    return 0;
}
