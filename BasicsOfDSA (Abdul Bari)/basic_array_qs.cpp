#include<iostream>
using namespace std;
#include<stdio.h>

/*void fun(int A[ ])
{
    cout<<sizeof(A)/sizeof(int)<<endl;
}
int main (){
    int A[]={2,4,6,8,10};
    int n=5;
    fun(A);
    cout<<sizeof(A)/sizeof(int)<<endl;
    for(int x:A)
    cout<<x<<" ";
    return 0;
}
*/

/*
void fun(int *A,int n)
{
    for(int i=0;i<n;i++)
    cout<<A[i]<<endl;
}
int main (){
    int A[]={2,4,6,8,10};
    int n=5;
    fun(A,n);
    
    for(int x:A)
    cout<<x<<" ";
    return 0;
}
*/



/*
//CAALL BY ADDRESS      
 void fun(int *A,int n)
{
    A[0]=15;
}
int main (){
    int A[]={2,4,6,8,10};
    int n=5;
    fun(A,n);
    
    for(int x:A)
    cout<<x<<" ";
    return 0;
}
*/

//CALL BY REFERENCE

int * fun(int size){
    int  *p;
    p=new int[size];

    for(int i=0;i<size;i++)
    p[i]=i+1;

    return p;

}
int main(){
    int *ptr,size=5;
    ptr=fun(size);
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<endl;
    return 0;
}