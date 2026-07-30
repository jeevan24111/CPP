#include<vector>
#include<iostream>
using namespace std;

void pushBackNegative(vector<int> &arr,int n){
    //[-42,-42,42,0,42]

    vector<int>arr1(0);
    vector<int>arr2(0);
    vector<int>arr3(0);
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr1.push_back(arr[i]);
        }else{
            arr2.push_back(arr[i]);
        }
    }
         // cout<<"\n";
         // for(i=0;i<arr1.size();i++){
         //     cout<<arr1[i]<<" ";->arr1 element[-42 -42 ]

         // }
         // cout<<"\n";
        // for(i=0;i<arr2.size();i++){  ->arr2 element[42 0 42 ]
         //     cout<<arr2[i]<<" ";

        // }

        //push arr1 to arr3
        for(i=0;i<arr1.size();i++){
            arr3.push_back(arr1[i]);  //push arr1 to arr3
            
    }
        //push arr2 to arr3
        for(i=0;i<arr2.size();i++){
            arr3.push_back(arr2[i]); 

    }
        //FInal array[-42 -42 42 0 42 ]
        cout<<"\n";
        for(i=0;i<arr.size();i++){
            cout<<arr3[i]<<" ";   

        }
        }
int main(){

    vector<int>arr(5);
    arr={42,-42,0,42,-42};

     for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int n=arr.size();
    pushBackNegative(arr,n);

    return 0;
}