#include<iostream>
#include<vector>
using namespace std;

int PeakMountainElement(vector<int> arr){
    int n=arr.size();
    // cout<<"\n"<<n;
    

    //1.brute force method
   /*int max=0;
    for(int i=0;i<n;i++){
            if (arr[i]>max){
                max=arr[i];
            }
    }
     return max;
     */ 
    // 2.optimized method

    int start=0,end=n-1;

    while(start<=end){
             int mid=start+(end-start)/2;
            //  cout<<mid<<" \n";
             if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
             }else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
                start=mid+1;
             }else{
                end=mid-1;
             }
    }

   
}
int main(){

        /* An array will be given of strictly increasing and strictly decreasing,
             my task is to find the peak element in my array

             eg->
             [ 1,2,3,5,7,6,4,2,1]->in this array i have to find the highest or peak element

             approaches->
                1.brute force method 
                    i can find max element in this array of by linear search 
                    time complexity is  o(n);
                    not optimized code
                2.optimized solution
                    since array is in sorted order i can apply binary search 
                    solution->
                      if left and right element are smaller than the mid element then ,mid element is my peak element
                      but when to move right and left
                      if my left is smaller than me then i have to move right
                      if my right is smaller than me then i have to move left
         
         */

         vector<int>arr={1,2,3,4,7,11,2,1};
         cout<<"ARRAY IS \n";
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
            
        }
        int peakelement=PeakMountainElement(arr);
        cout<<"Peak Element in this array exits at index  "<<peakelement<<"\n element is "<<arr[peakelement];

}