#include<iostream>
using namespace std;

int minimumElement1(int arr[],int n){
    int i;
    int min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min){
            int index=i;
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int arr[5];
    cout<<"Max element in an array\n";
    cout<<"Enter array element\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int minimumNumber=minimumElement1(arr,5);
    cout<<"\nmaximum element in your array is " <<minimumNumber;

 return 0;
}