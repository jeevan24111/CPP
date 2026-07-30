#include<iostream>
using namespace std;
int main(){
    
         for(int i=0;i<10;i++){
            cout<<i<<endl;
         }

         cout<<"-------------------";
         for(int i=10;i>0;i--){
            cout<<i<<endl;
         }
          cout<<"-------------------\n";

         for(int a=0;a<4;a++){
            for(int b=0;b<4;b++){
                cout<<b<<" ";
            }
            cout<<endl;
         }
            cout<<"-------------------\n";
        // int num=1;
        //  for(int i=0;i<5;i++){
        //     for(int j=0;j<5;j++){
        //         cout<<num<<" ";
        //         num++;
        //     }
        //     cout<<endl;
        //  }

        for(int i=0;i<5;i++){
            for(int j=0;j<i;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
}