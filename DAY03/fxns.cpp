#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
void sayHello(string name){
    cout<<"Hello "+name+" welcome to Functions(in CPP) ";
}
int showFact(int num){
    if(num<=0) return 1;
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}

void showResult(int marks){

    if(marks>=90 && marks<=100){
        cout<<"Your Grade is : A+\nPass"<<endl;
    }else if(marks>=85 && marks<90){
        cout<<"Your Grade is : A\nPass"<<endl;
    }else if(marks>=75 && marks<85){
        cout<<"Your Grade is : B+\nPass"<<endl;
    }else if(marks>=65 && marks<74){
        cout<<"Your Grade is : B\nPass"<<endl;
    }else if(marks>=37 && marks<64){
        cout<<"Your Grade is : C\nPass"<<endl;
    }else if(marks>=0 && marks<=36){
        cout<<"Your Grade is : D\nFail"<<endl;
    }else{
        cout<<"Invalid marks"<<endl;
    }
}
void Calculator(int op1,int op2,char op){
    switch(op){
        case '+': cout<<"Addition of 2 number is: ";cout<<op1+op2;break;
        case '-': cout<<"Subtraction of 2 number is: ";cout<<op1-op2;break;
        case '*': cout<<"Multiplication of 2 number is:";cout<<op1*op2;break;
        case '%': cout<<"Remainder of 2 number is:";cout<<op1%op2;break;
        case '/':if(op1==0){
                     cout<<"Divided by zero error\n";
                     break;
              }else{
                  cout<<"Division of 2 number is:";cout<<op1/op2;
              }
                 break;
        default:cout<<"Invalid Operator\n";break;
    }

}
int main(){
    cout<<"Functions"<<endl;   
    
    //how do i create functions
    cout<<"sum of 2,3 is"<<endl;
    cout<<add(2,3)<<endl;
    //fxn with no return type;
    sayHello("Alex");

    /*
    fxn with return type->return type can be any of your data type
            -int,float,string,bool
            it depend on the return you are returning from functions 
    */

    int factorial=showFact(5);
    int factorial1=showFact(4);
    int factorial2=showFact(8);
    cout<<endl<<factorial;
    cout<<endl<<factorial1;
    cout<<endl<<factorial2;

    //1.adding  of 2 number
    /* i have already created (add(int a,int b)-it so now i will reuse it*/
    cout<<endl<<add(5,123);

    //2.factorial programme
    /* i have already created factorial programme i wil call this */
    cout<<endl<<showFact(6);


    //3.pass fail fxn
    cout<<endl;
    int marks;
    cout<<"enter your marks bro: ";
     cin>>marks;

     showResult(marks);

     cout<<endl;
     cout<<"Do You Calculator to use->(yes/no): ";
     string choice;
     cin>>choice;
     if(choice=="yes"){
          cout<<endl;
        cout<<"Enter the operation\n Enter '+' for addition\n Enter '-' for Subtraction\n Enter '*' for Multiplication\n Enter '/' for Division\n Enter '%' for remainder\n";
        char operator1;
        int operand1,operand2;
        cin>>operator1;
        cout<<endl;
        cout<<"Enter Operand 1 : \n";
        cin>>operand1;
        cout<<endl;
        cout<<"Enter Operand 2 : \n";
        cin>>operand2;
        cout<<endl;
        Calculator(operand1,operand2,operator1);
     }else if(choice=="no"){
        cout<<"moved to next stage\n";
     }else{
        cout<<"invalid choice\n";
     }
   
     
    return 0;
}