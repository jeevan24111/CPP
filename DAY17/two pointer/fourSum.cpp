#include<iostream>
#include<vector>
using namespace std;
vector<int> FOURSUM(vector<int>&arr,int n,int target){

    
    /*brute force */
    vector<int>ans;
    int newtarget=target-(arr[0]+arr[1]);
    cout<<newtarget;
    int start=arr[2],end=n-1;
    ans.push_back(arr[0]);
    ans.push_back(arr[1]);
    for(int i=start;i<n-4;i++){
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

    vector<int>arr={1,2,3,4,2,9,2,4};
    int n=arr.size();
    int target=10;

    vector<int>ans=FOURSUM(arr,n,target);
     cout<<"index are\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }




    return 0;
}