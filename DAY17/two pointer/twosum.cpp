#include<iostream>
#include<vector>
using namespace std;
vector<int> TWOSUM(vector<int>&arr,int n,int target){

    int start=0,end=n-1;
    
    vector<int>ans;
    for(int i=0;i<n-2;i++){
        if(arr[start]+arr[end]==target){
                ans.push_back(start);
                cout<<start;
                ans.push_back(end);
                cout<<end;
                return ans;
        }else if(arr[start]+arr[end]<target){
            start++;
        }else{
                end--;
        }
    }

    return ans;

    

}

int main(){


        /*two pointers
        i have to find target sum in array using 2 values and have to return their  indexs
        */

    vector<int>arr={1,2,3,4,2,9};
    int n=arr.size();
    int target=6;

    vector<int>ans=TWOSUM(arr,n,target);
     cout<<"index are\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }




    return 0;
}