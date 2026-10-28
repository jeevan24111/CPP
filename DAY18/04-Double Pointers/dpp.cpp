#include<iostream>
using namespace std;
int main(){

    //* double pointer is a pointer which points to another pointer and that pointer points to the value stored in the memory location

    int a=10;
    int *p=&a;
    int **q=&p; 
    
    cout<<a<<endl;
    cout<<&a<<endl;
      
    cout<<p<<endl;
    cout<<&p<<endl;   
    cout<<*p<<endl;
    
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<**q<<endl;//*gives the value stored in the address of pointer p which is 10
    cout<<*q<<endl;//*gives the address of pointer p which is 0x7ffee3b8c9a8
    return 0;

}