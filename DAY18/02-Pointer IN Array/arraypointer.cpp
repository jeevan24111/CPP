#include<iostream>
using namespace std;
int add(int p[],int size);
int main(){
    //* how the pointers works in array

    int arr[]={12,3,4,5,6,};
    int size=5;
    cout<<arr<<endl;
    //* if i try to print the arr which  gives the first index address of the array
    //*i.e is arr[0]

    cout<<arr[0]<<endl;
    //*gives the value stored at the index 0 and arr just gives the address of array

    cout<<*arr<<endl;//*points to the first index of array and gives its value 
    //* is used gives the value stored in the pointing address 

    cout<<*(arr+0)<<endl;
     cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;
    // cout<<*(arr+5)<<endl;
    
    int sum=add(arr,size);
    //passing array and size  from here to add function to add all number in this array
        cout<<endl<<sum<<endl;
}
 //* p[] is also a pointer but a diff notation it is also a pointer pointing to the arr[] array which is a call by reference

// int add(int p[],int n){
//         int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=p[i];
//     }

//     return sum;
// }


int add(int *p,int n){
    cout<<p;
    cout<<&p<<endl;
    cout<<*p<<endl;
        int sum=0;
    for(int i=0;i<n;i++){
        sum+=p[i];
    }

     for(int i=0;i<n;i++){
       cout<<&p[i]<<endl;
       cout<<p[i]<<endl;
       cout<<*(p+i)<<endl;

    }

    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    // cout<<*(p+5)<<endl;
    return sum;
}


// int add1(int *p,int n){
//         int sum=0;
//     for(int i=0;i<n;i++){
//         cout<<&p(i);
//     }

//     return sum;
// }