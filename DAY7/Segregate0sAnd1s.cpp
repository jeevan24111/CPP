#include<vector>
#include<iostream>
using namespace std;
void Segregate0sAnd1s(vector<int> &arr,int n){
    //[0,0,0,1,1]

    vector<int>arr1(0);
    vector<int>arr2(0);
    vector<int>arr3(0);
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr1.push_back(arr[i]);
        }else{
            arr2.push_back(arr[i]);
        }
    }
         cout<<"\n";
         for(i=0;i<arr1.size();i++){
             cout<<arr1[i]<<" ";

         }
         cout<<"\n";
        for(i=0;i<arr2.size();i++){  
             cout<<arr2[i]<<" ";

        }

        //push arr1 to arr3
        //  cout<<arr1.size();
        for(i=0;i<arr1.size();i++){
            arr3.push_back(arr1[i]);  //push arr1 to arr3
            
    }
        //push arr2 to arr3
        for(i=0;i<arr2.size();i++){
            arr3.push_back(arr2[i]); 

    }
        //FInal array[0 0 0 1 1  ]
        cout<<"\n";
        for(i=0;i<arr.size();i++){
            cout<<arr3[i]<<" ";   

        }
        
}
int main(){

    //target [ 0,0,1,1,0]-to-[0,0,0,1,1]
     vector<int>arr(5);
    arr={0,0,1,1,0};

     for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int n=arr.size();
    Segregate0sAnd1s(arr,n);

    return 0;
}