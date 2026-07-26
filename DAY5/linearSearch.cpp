#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int n,int key){

    int i;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5];
    cout<<"Search element in an array\n";
    cout<<"Enter array element\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter target key element\n";
    int target;
    cin>>target;
     bool found=LinearSearch(arr,5,target);
     if(found){
        cout<<target<< " element is found in your array\n";
     }else{
         cout<<target<<" element is not found in your array\n";
     }

 return 0;
}