#include<iostream>
using namespace std;


 int_fast16_t  findInsertion(int arr[],int n,int target){
    

    int start=0,end=n-1,index=n;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }else if(target>arr[mid]){
            start=mid+1;
        }else{
            index=mid;
            end=mid-1;
        }
    }

 return index;
 }
int main(){

   /* an array is there my task is to find the insertion position of the target element
    if my target element is found then return its position
    else return its insertion position

    eg [1,2,3,4,5]->target element 5->its position is  4(0 based indexing)
      [1,3,4,5]  ->target is 2 ->it is not present ->now i have to give its insertion position->it is 1(0 based indexing)
   */


   int arr[10]={1,2,4,5,6,7,8,9,10,11};
   int n=5;
   int target=13;
    int insertion=findInsertion(arr,n,target);

    cout<<"insertion position is  "<<insertion;

}