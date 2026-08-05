#include<iostream>
using namespace std;

int KthMissingNumber(int arr[],int n,int miss){

    for(int i=0;i<n;i++){
        int missing=arr[i]-(i+1);
        if(missing>miss){
            return i+miss;
        }
    }
    return n+miss;

//time complexity O(n)

}
int main(){
        /*
            i will be given an array 
          array is in sorted form 
          i have to find the target missing number
          [2,5,9,12,18,20] find 10th missing number?
          lets create missing numbers array
          formula to find missing array is
          current element-(index+1);
          for the 1st element =>2-(0+1)=>1
          for 2nd=>5-(1+1)=>3
          and so on till last element
          [1,3,6,8,13,14]

          i have to fine 10th missing number
          how do i know this 
          till 12  i have  8 missing number and to 18 we have 13 ele
          i have to find 10th missing means
          it will be 8-13 only right
          till 12 i have missing no. and if i add 2 here i will 14 and my missing 10 number is 14
          
          or 13 >10 of course my no element not present in 18 right
          it is same as insertion position problem
          once i get value which is greater than k then i have to return k+i;
          k=10+index=4->14 my 10 th missing  number
        */

        int arr[6]={2,5,9,12,18,20};
        int n=6;
        int miss=10;
        int number=KthMissingNumber(arr,n,miss);
        cout<<"Missing "<<miss<<" nd number is "<<number;


    return 0;
}