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

    
    int sum=add(arr,size);
    //passing array and size  from here to add function to add all number in this array

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
        int sum=0;
    for(int i=0;i<n;i++){
        sum+=p[i];
    }

    return sum;
}


int add1(int *p,int n){
        int sum=0;
    for(int i=0;i<n;i++){
        cout<<&p(i);
    }

    return sum;
}