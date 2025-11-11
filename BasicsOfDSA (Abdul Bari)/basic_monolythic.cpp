#include<iostream>
#include<stdio.h>
using namespace std;

    /*
    int main(){
        int length,breadth=0;

        printf("Enter length and Breadth :");
        cin>>length>>breadth;

        int area=length*breadth;
        int perimeter=2*(length*breadth);
        printf("Area=%d\n Perimeter=%d\n",area,perimeter);
        return 0;
    }
    
    */

   int area(int length, int breadth)
   {
    return length * breadth;
   }
   int perimeter(int length, int breadth){
    int p;
    p=2*(length+breadth);
    return p;
   }

   int main(){

    int length=0,breadth=0;
    printf("Enter length  and Breadth");
    cin>>length>>breadth;

    int a=area(length,breadth);
    int peri=perimeter(length,breadth);
    printf("Area=%d\n Perimeter=%d\n",a,peri);
    return 0;
   }

