#include<iostream>
using namespace std;


int main(){

     //why we need array->to store multiple values of the same type in container so that we can easily access them

     /*
      arrays are usually store same data type variable of multiple values
      array start with zero index->to access elements easily
      syntax: data_type  array_name[array size]={ele1,ele2};
      eg: int arr[2]={1,2};
     */


     //1.array declaration
     int arr[2];

     //2.array initialization
     arr[0]=5;
     arr[1]=10;

     cout<<arr[0]<<endl<<arr[1]<<endl;

     //3.printing array values
     for(int i=0;i<2;i++){
        cout<<arr[i]<<" ";
     }
     cout<<"\n";
     
     //cout<<"printing values without initialization and when it is declared ,,it gives garbage values"<<endl;
     int arr1[5];

       for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
     }

     //assigning all elements of array with 0

     float arr2[10]={0};
     cout<<"\n";
     cout<<arr2[5];


     //accessing arrays each element
     /* index 5 = index-1*/

     cout<<arr1[2]<<endl;
     cout<<arr1[5]<<endl;
    //  cout<<arr1[6]<<endl;

    //initialization of array with single value
    string name[5]={"abc"};
    cout<<name[0]<<endl;
    cout<<name[3]<<endl;
    cout<<&name[3]<<endl;


    //printing all arrays values address
    for(int i=0;i<5;i++){
        cout<<&arr1[i]<<" ";
     }

     //user input for array size and element

     int userSize;
     cout<<"\n Enter array size : ";
     cin>>userSize;

     int arrayOfUserSize[userSize]={0};
     for(int i=0;i<userSize;i++){
        cout<<"Enter element : ";
        cin>>arrayOfUserSize[i];
     }
     cout<<"\n";
     cout<<"your array elements are\n";

     for(int i=0;i<userSize;i++){
        cout<<arrayOfUserSize[i]<<" ";
     }

     //we should not use user input for array size
    return 0;
}