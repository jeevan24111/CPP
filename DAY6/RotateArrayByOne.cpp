#include<iostream>
using namespace std;

void RotateArrayByOne(int arr[],int n){

    int temp=arr[n-1];

    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;

    cout<<"\nAfter One Rotation,Array Becomes\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int arr[5];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=5;
    /*  I have to rotate Array by one means
        i have to make  my array as->[5,1,2,3,4];

    */
   int n=5;
    cout<<"\n Before Array Rotation is : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   RotateArrayByOne(arr,n);

   return 0;
}