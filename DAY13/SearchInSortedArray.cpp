#include<iostream>
using namespace std;


void SearchinSortedArray(int arr[],int n,int target){

    int start=0,end=n-1;
        
    while(start<=end){
        int mid=end+(start-end)/2;
        if(mid==target){
            cout<<"\nKey is Found IN array\n";
        }else if(mid>arr[0]){
            if(target>start && target<arr[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }else{
              if(target>arr[mid] && target<end){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
}
int main(){


    /* problem ->if i have a given array in sorted array i have to find the 
       [30 40 50 60 70 80 10 20 30] i have to search an element in this array
       key=20

       approach 
       1.from linear  search i will find key elemet easily 
          takes o(n) time complexity
    
       2.optimized solution
          ->the array is sorted from 30-80 in left portion
          ->and 10-20 is sorted in right portion

          i have ot know left and right sorted part 
          i will do that by comparing with 0th index element
          if mid is greater than arr[0] then i have to be  in left portion and then i have to left
          if mid is less than arr[0] then i have to go to right to get my  element

          but i here is one approach i have to get my ele
          while i am moving to left ,then i need to check a condition
          if my ele is > arr[0] and < arr[left]
          then only i have to move left else right 

          if i am right portion there also i need check condition before moving towards left

         ele is >arr[0] and <arr[right]
         then only i move right else left i have ot go
    */

    int arr[9]={30,40,50,60,70,80,10,20,30};

    int n=9;
    int target=20;
    SearchinSortedArray(arr,n,target);


    return 0;
}