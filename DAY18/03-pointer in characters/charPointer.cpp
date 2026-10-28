#include<iostream>
using namespace std;
int main(){


    //* in Character array if we try to print the array it does not gives its address instead it gives the whole array value printed over there*//

    char ar[]={'A','B','C','D','E'};
    cout<<ar<<endl;

    //* now if i want its exact address then i need use void 
    cout<<(void*)ar;
no
    return 0;
}