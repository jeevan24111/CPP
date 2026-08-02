#include<iostream>
#include<vector>
using namespace std;

vector<int> getfirstandlastindex(vector<int>arr,int n,int target){
        // cout<<n<<" ";

    int start=0,end=n-1;
    int index1=-1,index2=-1;
    // to move left side to get first index
    while(start<=end){
        int mid=start+(end-start)/2;
        // cout<<mid<<" \n";
        if(arr[mid]==target){
            end=mid-1;
            index1=mid;
            // cout<<"\n"<<index1;
        }else if(target>arr[mid]){
          end=mid-1;
        }else{
             start=mid+1;
        }
        
    }
    // to move right side to get last index
     start=0,end=n-1;
      while(start<=end){
        int mid=start+(end-start)/2;
        //  cout<<mid<<"\n ";
        if(arr[mid]==target){
            start=mid+1;
            index2=mid;
            // cout<<"\n"<<index2;
        }else if(target<arr[mid]){
            end=mid-1;  
        }else{
            start=mid+1;
        }
        
    }

    // cout<<index1<<" \n"<<index2;

    vector<int>arr2;
    arr2.push_back(index1);
    arr2.push_back(index2);
    return arr2;
}

int main(){

    /*
            In this problem i have to give the first and last index of a  target element

              [1,2,3,3,3,3,4,5]->target element is 3 
            -> 0 1 2 3 4 5 6 7 ->indexes 
            first index of 3 is 2
            last index of 3 is  5
            i have  to find this if it is not found i have to return -1 -1 
            
            approach 
                ->given array in sorted order and in this case i can apply binary search
                ->first find mid and if i found target element,then
                to find first index i have to left side and to find last index i have to go right side right 
        
    */

    // int arr[8]={1,2,3,3,3,3,4,5};

    vector<int>arr;     //learning dont give size and initialize with zero first it will assign those and next after    those elements pushed will will be present
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
// for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     // }


    int target=3;
    int n=arr.size();
    // cout<<n;

    vector<int>arr2(2,0);
    arr2=getfirstandlastindex(arr,n,target);
cout<<"\n";
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }







    return 0;
}