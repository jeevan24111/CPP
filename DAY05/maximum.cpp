#include<iostream>
using namespace std;

int maximumElement1(int arr[],int n){
    int i;
    int max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            int index=i;
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[5];
    cout<<"Max element in an array\n";
    cout<<"Enter array element\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int maximumnumber=maximumElement1(arr,5);
    cout<<"\nmaximum element in your array is " <<maximumnumber;

 return 0;
}