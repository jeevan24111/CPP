#include<iostream>
using namespace std;

int  MissingNumber(int arr[],int n){

    int i,sum=0;
    int sumofN=n*((n+1)/2);
    for(i=0;i<4;i++){
        sum+=arr[i];
    }
    return sumofN-sum;
   
}

int main(){
    int arr[5];
    cout<<"FIND MISSING element in an array\n";
    cout<<"Enter array element\n";
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int miss=MissingNumber(arr,5);
    cout<<"\nMissing number is "<<miss;


 return 0;
}