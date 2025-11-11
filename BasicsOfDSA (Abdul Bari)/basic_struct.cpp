#include<iostream>
using namespace std;
#include<stdio.h>
    struct Rectangle{
        int length;
        int breadth;
        char x;
    } r1,r2,r3 ;
    //struct Rectangle r1,r2,r3;
    int main (){
        struct Rectangle r1={10,5};
        r1.length=15;
        r1.breadth=7;
        cout<<r1.length<< endl;
        cout<<r1.breadth<< endl;
        
         //printf("%lu\n",sizeof(r1));

    // cout << "\n";
    // cout<<sizeof(A)<<endl;
   
    // cout <<A[2]<<endl;
    return 0;
}