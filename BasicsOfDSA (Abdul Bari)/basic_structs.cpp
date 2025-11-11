#include<iostream>
using namespace std;
#include<stdio.h>
/*
struct Rectangle
{
    int length;
    int breadth;
};
void fun(struct Rectangle r)
{
    r.length=20;
    cout<<"Length :"<<r.length<<endl<<"Breadth :"<<r.breadth<<endl;
}
int main()
{
    struct Rectangle r={10,5};
    fun(r);

    printf("Length %d \nBreadth %d\n",r.length,r.breadth);
    return 0;
}
*/


/*
//CALLL BY ADRESS
struct Rectangle
{
    int length;
    int breadth;
};
void fun(struct Rectangle *ptr)
{
    ptr->length=20;
    cout<<"Length :"<<ptr->length<<endl<<"Breadth :"<<ptr->breadth<<endl;
}
int main()
{
    struct Rectangle r={10,5};
    fun(&r);

    printf("Length %d \nBreadth %d\n",r.length,r.breadth);
    return 0;
}

*/

//CALL BY REFRENCE

struct Rectangle
{
    int length;
    int breadth;
};
struct Rectangle *fun()
{
    struct Rectangle*p;
    p=new Rectangle;
    //p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=15;
    p->breadth=7;
    return p;
}
int main()
{
    struct Rectangle *ptr=fun();
    cout<<"Length "<<ptr->length<<endl<<"Breadth "<<ptr->breadth<<endl;

   // printf("Length %d \nBreadth %d\n",r.length,r.breadth);
    return 0;
}
