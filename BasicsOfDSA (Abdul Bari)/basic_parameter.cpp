#include<iostream>
#include<stdio.h>
using namespace std;


    void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int num1=10,num2=15,sum;

    swap(num1,num2);
    
    cout<<"Second Number "<<num2<<endl;
    //cout<<"Sum is :"<<sum;
    return 0;
    }





    //int add(int a, int b)
/*{
    // int c;
    // c=a+b;

    a++;
    cout<<a;
    return 0;
}
int main(){
    int num1=10,num2=15,sum;

    sum=add(num1,num2);
    cout<<endl<<num1;
    //cout<<"Sum is :"<<sum;
    return 0;
    }
*/
