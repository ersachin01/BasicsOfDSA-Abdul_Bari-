#include<iostream>
using namespace std;

// int main(){
//     int a=10;
//     int &r=a;

//     int b=30;
//     r=b;
//     cout<<a<<endl<<r<<endl;
//     return 0;
// }




// struct Rectangle
// {
//     int length;
//     int breadth;
// };
//     int main(){
//         struct Rectangle r={10,5};
//         cout<<r.length<<endl;
//         cout<<r.breadth<<endl;

//         Rectangle *p=&r;
//         cout<<p->length<<endl;
//         cout<<p->breadth<<endl;

//         return 0;
//}





        struct Rectangle
{
    int length;
    int breadth;
};
    int main(){
        

        Rectangle *p;
        p=(struct Rectangle *)malloc(sizeof(struct Rectangle));

        p->length=15;
        p->breadth=7;
        
        cout<<p->length<<endl;
        cout<<p->breadth<<endl;

        return 0;
    }
    