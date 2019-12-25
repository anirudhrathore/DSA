//
//  main.cpp
//  Tower of Hanoi
//
//  Created by Anirudh Singh Rathore on 01/10/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>
using namespace std;
void tower(int num, char source, char destination, char spare){
    if (num==1){
        cout<<"Move disk 1 from rod "<<source<<" to rod "<<destination<<endl;
        return;
    }
    tower(num-1, source, spare, destination);
    cout<<"Move disk "<<num<<" from rod "<<source<<" to rod "<<destination<<endl;
    tower(num-1, spare, destination, source);
}

int main() {
    int n;
    cout<<"Enter the number of disks : ";
    cin>>n;
    cout<<"Move involved : \n";
    tower(n, 'A', 'C', 'B');
    return 0;
}
