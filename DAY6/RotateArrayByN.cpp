#include<iostream>
using namespace std;
 void RotateArrayByN(int arr[],int n,int k){

    int arr1[n];
    for(int i=0;i<n;i++){
        arr1[(i+k)%n]=arr[i];
    }
    cout<<"\nAfter One Rotation,Array Becomes\n";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }

    

}

int main(){
    /* Rotate array by n
    arr[5]={1,2,3,4,5}
    
    if n=3 then rotation is

    arr5={3,4,5,1,2}
    
    */

    int arr2[5]={1,2,3,4,5};
    int n=3;
    cout<<"\n Before Array Rotation is : \n";
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }

    RotateArrayByN(arr2,5,n);
     

}