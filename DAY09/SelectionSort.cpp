#include<iostream>
#include<vector>
using namespace std;

int main(){
    /*  selection sort 
        lets suppose an array is given [1,10,4,2,9]
        i have to sort it ->but why i have to sort it right
        eg->price filter ascending to descending in Myntra,Flipkart more 
        we need it when we want data in ascending or descending order
    */

            /*  how do i achieve this 
            [1,10,4,2,9]->[1,2,4,9,10]

                    first get minimum ele and put it at first position
                    1.  1,10,4,2,9
                    2. 1,2,4,10,9
                    3.1,2,4,10,9
                    4.1,2,3,9,10
                    5.1,2,3,4,9,10
                    
    */
     int arr[5]={1,10,4,2,9};
    int i,j=0;

    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    int n=5;
    cout<<"\n";

        // selection sort algorithm
      int min;
        for(i=0;i<n;i++){
           min=i;
            for(j=i+1;i<n;j++){
                cout<<arr[j]<<" ";
                if(arr[j]<arr[min]){
                    swap(arr[j],arr[i]);
                }
            }
        }
    
        cout<<"\n";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}