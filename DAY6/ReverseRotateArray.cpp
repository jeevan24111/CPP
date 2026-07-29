#include<iostream>
#include<vector>
using namespace std;

void  ReverseRotate(int arr[] ,int n,int key){
    /*  cout<<"\n";
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
         }
    */
   key=key%n;  // if key is 12 but size is 5 12%5=2 no need for extra rotation
   if(!key){
    return;
   }

   //first k element swap

   int i=0;
   int j=key-1;

    while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
    }

    //reverse remaining element
    i=key;
    j=n-1;
    while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
    }
    cout<<"\n";
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
         }
    
}
void ReveraseArray(int arr[],int n){


        int temp,i;
    for(i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }

    cout<<"\n";
     for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){

    /* rotation of array by reverse method
       arr1=[1,2,3,4,5]

       first reverse
       arr1=[5,4,3,2,1]

       next n =2
        swap first 2 element ={4,5}
        next remaining element ={1,2,3}
    final array
     arr1={4,5,1,2,3};

    */
    // vector<int>arr1(5,0);
    // arr1.push_back(1);
    // arr1.push_back(2);
    // arr1.push_back(3);
    // arr1.push_back(4);
    // arr1.push_back(5);

    int arr1[5]={1,2,3,4,5};

    //    for(int i=0;i<5;i++){
    //     cout<<arr1[i]<<" ";
    //     }
    ReveraseArray(arr1,5);
    int key=2;


    ReverseRotate(arr1,5,key);
    
}