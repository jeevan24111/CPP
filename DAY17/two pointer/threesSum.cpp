#include<iostream>
#include<vector>
using namespace std;
vector<int> THREESUM(vector<int>&arr,int n,int target){

    
    
    vector<int>ans;
    int newtarget=target-arr[0];
    cout<<newtarget;
    int start=arr[1],end=n-1;
    ans.push_back(arr[0]);
    for(int i=0;i<n-3;i++){
        if(arr[start]+arr[end]==newtarget){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }else if(arr[start]+arr[end]<newtarget){
            start++;
        }else{
            end--;
        }
    }

    return ans;

    

}

int main(){


        /*two pointers
        i have to find target sum in array using 3 values 
        */

    vector<int>arr={1,2,3,4,2,9};
    int n=arr.size();
    int target=6;

    vector<int>ans=THREESUM(arr,n,target);
     cout<<"index are\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }




    return 0;
}