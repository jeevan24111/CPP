
#include<iostream>
using namespace std;
int main(){
    int a=10;
    short s=12;
    long x=1234456;
    float f1=12.23;
    double d1=23.323412;
    bool isCurrent=false;
    char rupee='$';
    string name="hello";

     std::cout<<a<<endl;
     std::cout<<rupee<<"\n";
      std::cout<<isCurrent<<endl;
      std::cout<<x<<endl;
      std::cout<<f1<<endl;
      std::cout<<d1<<endl;
      std::cout<<s<<endl;
      std::cout<<name<<endl;

      cout<<"done"<<endl;
      /*Operators*/
    int x1=10,y1=2;
    cout<<x1+y1<<endl;
    cout<<x1-y1<<endl;
    cout<<x1*y1<<endl;
    cout<<x1/y1<<endl;
    cout<<x1%y1<<endl;
    cout<<x1+y1-x1<<endl;

    cout<<"unary operators"<<endl;
    /*unary operators*/
    short a1=5;
    a1++;
    cout<<a1<<endl;
    cout<<++a1<<endl;
    cout<<--a1<<endl;
    cout<<a1--<<endl;

    // cout<<"ternary operator"<<endl;
    // int age=18;
    // if(age<18) ? cout<<"child":cout<<"adult"<<endl;
    

    cout<<"logical operators"<<endl;
    int age=17;
    bool isStudent=true;

    if(age>=18 && isStudent){
        cout<<"You Are In College"<<endl;
    }else{
        cout<<"Your are in School"<<endl;
    }

    if(age>=18 || isStudent){
        cout<<"you can  avail 80% discount"<<endl;
    }else{
        cout<<"you can avail 20% discount"<<endl;
    }

    if(age!=20){
        cout<<"you can  avail 80% discount"<<endl;
    }else{
        cout<<"you can avail 20% discount"<<endl;
    }
     return 0;
}