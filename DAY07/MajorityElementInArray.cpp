#include<iostream>
using namespace std;
int MajorityElement(int arr[],int n){
   int  freq[n]={0};
    int i;
   for(i=0;i<n;i++){
    freq[arr[i]]++;
   }
//    get all elements frequency 0 based indexing
   for(i=0;i<n;i++){
    cout<<freq[i]<<" ";
   }
//    cout<<max;
//    cout<<"\n";
   //get max element freq
    int max=-1;
   for(i=0;i<n;i++){
    if(freq[i]>max){
        max=freq[i];
    }
   }
 int   major=arr[freq[max]+1];
//    cout<<arr[freq[max]+1];
   
   cout<<"\n";
  
return major;

}
int main(){
        // to get majority element in the array
    int arr[7]={1,2,2,1,3,3,2};

    int major1=MajorityElement(arr,7);
    cout<<"\n Majority Element in the array arr is : "<<major1;


    return 0;
}