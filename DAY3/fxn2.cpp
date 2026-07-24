#include<iostream>
using namespace std;


void sum(int a,int b){
    cout<<a+b<<endl;
}
void sum(int a,int b,int c){
    cout<<a+b+c<<endl;
}

void sum(float a,int b){
    cout<<a*b;
}

int main(){
    //fxn overloading

    int a=10,b=20,c=30;
    float d=10.2,e=20.2;

    sum(a,b);
    sum(a,c);
    sum(a,b,c);
    sum(d,b);

    
    return 0;
}