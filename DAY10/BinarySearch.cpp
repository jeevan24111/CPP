#include<iostream>
using namespace std;


int main(){
    /*Binary search
            binary search is applied when we have given array in sorted form
            it is a searching algorithm

            arr[1,2,3,4,5]->find 5
            

            find mid=(start+end)/2;

            if(target==arr[mid])->found
            else(target<arr[mid])=>end=mid-1
            else(target>arr[mid])=>start=mid+1

            until 
    */
        int binarysearch[6]={1,3,5,7,9,10};
         cout<<"Array Elements are"<<"\n";
        for(int i=0;i<5;i++){
        cout<<binarysearch[i]<<" ";
        }
            int n=5;
        int target=9;
        int start=0,end=n-1;
         int found;
        while(start<=end){    ///it has to be in its calculated  range  if not exit
            int mid=end+(start-end)/2;
            if(target==binarysearch[mid]){
                cout<<"\nelement found";
                found=mid;
                break;
            }else if(target<binarysearch[mid]){
                    end=mid-1;
            }else{
                start=mid+1;
            }
     } cout<<"\nelement is "<<binarysearch[found];
    
}