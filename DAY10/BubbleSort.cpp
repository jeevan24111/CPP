#include<iostream>
using namespace std;

int main(){
    /*Bubbble sort
            given an array
            [4,5,2,1,3]->sort to->[1,2,3,4,5]

            steps
            1.[4,2,1,3,"5"]
            2.[2,1,3,"4,5"]
            3.[1,2,"3,4,5"]
            4.[1,"2,3,4,5"]
            sorted
    */


    int arr[5]={4,5,2,1,3};
    int n=5;
    cout<<"Array before sorting\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int j,i;
    
     for(i=0;i<n-1;i++){
        // bool swapped=false;
        for(j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    // swapped=true;
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
              
        }
        //   if(!swapped){
        //     break;
        //   }
     }
      cout<<"\nArray before sorting\n";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}