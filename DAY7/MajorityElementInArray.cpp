#include<iostream>
using namespace std;
int MajorityElement(int arr[],int n){
   int  freq[100]={0};
    int i;
   for(i=0;i<n;i++){
    freq[arr[i]]++;
   }
   //get all elements frequency 0 based indexing
   for(i=0;i<n;i++){
    cout<<freq[i]<<" ";
   }
   int max=arr[freq[i]];
    for(i=0;i<n;i++){
       if(freq[i]>max){
        max=arr[freq[i]];
       }
   }
   cout<<"\n";
   cout<<max;


}
int main(){

    int arr[7]={1,2,3,1,3,3,3};

    int major=MajorityElement(arr,7);


    return 0;
}