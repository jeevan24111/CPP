#include<iostream>
using namespace std;
int main(){
    cout<<"hello world";
    /*pointer in cpp
     now i will explain why we need pointers
    */

    int a=4;
    //here a is storing value 4
    cout<<a<<endl;
    cout<<&a<<endl;
    //gives address value of variable a

    /*now we have 32bit and 64 bit os then address also diff in size right!!
    then if i need to store them in a integer value it is quite diff coz dont know the exact size of it so we use a pointer which can store any size of address in it.

    so there comes our pointer which can store diff kind of address in it whether it is 32 or 64 bit os.

    and 2^32 is a 32 bit operating system and why 2^33  os is 64 bit os coz it is mutiple of 8.
    */

    int *ptr=&a;

    //ptr is a pointer which stores an integer value->i.e address of a variable which diff in size. 

    cout<<a<<endl;
    //gives the a value
    cout<<&a<<endl;
    //gives address of variable a in the system by os 
    cout<<ptr<<endl;
    //gives the value stored in ptr ->ptr is storing address of variable->
    cout<<&ptr<<endl;
    //gives the address value of ptr which is given by os in the ram
    cout<<*ptr<<endl;
    //gives the exact value which is  stored in the address of pointing variable ->value of a by pointed by ptr

    string s ="hello";
    cout<<s<<endl;
    cout<<&s<<endl;

    string *s1=&s;
    cout<<s1<<endl;
    cout<<&s1<<endl;
    cout<<*s1<<endl;


}