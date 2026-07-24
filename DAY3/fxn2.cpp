#include<iostream>
using namespace std;


void sum(int a=1,int b=0){
    cout<<a+b<<endl;
}
void sum1(int a=1,int b=0){
    cout<<a+b<<endl;
}
void sum(int a,int b,int c){
    cout<<a+b+c<<endl;
}

void sum(float a,int b){
    cout<<a*b;
}

void swapByValue(int a,int b){
    //pass by value
    int temp=a;
    a=b;
    b=temp;
}
void swapByReference(int &b,int &c){
    //pass by value
    int temp=b;
    b=c;
    c=temp;
}
int main(){
    //fxn overloading

    int a=10,b=20,c=30;
    float d=10.2,e=20.2;

    sum(a,b);
    sum(a,c);
    sum(a,b,c);
    sum(d,b);
    cout<<"\n";

    //swapping of variable
    cout<<"Call BY VALUE"<<endl;

    //1.call by variable
     cout<<"value of A Before swapping "<<a<<endl;
    cout<<"value of b Before swapping "<<b<<endl;
    swapByValue(a,b);
     cout<<"value of A After swapping  "<<a<<endl;
   cout<<"value of b  After swapping" <<b<<endl;

   //in call by value copies of values are sent to the function ,actual values are not affected 
   /* In function when you send value they are scope will end there only
    to change original values you have to do pass by references
   */

   //2.pass by reference
   cout<<"CALL BY REFERENCE"<<endl;
   cout<<"value of B Before swapping "<<b<<endl;
    cout<<"value of C Before swapping "<<c<<endl;
    swapByReference(b,c);
     cout<<"value of B After swapping  "<<b<<endl;
   cout<<"value of  C After swapping " <<c<<endl;

   

     //default constructor
     /* If any parameter is not send to fxn  fixed values will be present thee to handle error*/
     int d1=20,d2=30;
     sum1();


       return 0;
}