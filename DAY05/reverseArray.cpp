#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
    int i;
   for(i=0;i<n/2;i++){
        int temp=arr[0];
        arr[0]=arr[n-1-i];
        arr[n-1-i]=temp;
   }
}

int main(){
    int arr[5];
    cout<<"Reverse elements in an array\n";
    cout<<"Enter array element\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
   cout<<"\nBefore Array reverse\n";
   for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
   }
   reverseArray(arr,5);
   cout<<"\nAfter  Array reverse\n";
   for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
   }

 return 0;
}