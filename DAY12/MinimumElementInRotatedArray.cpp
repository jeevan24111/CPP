#include<iostream>
#include<vector>
using namespace std;
int RotatedMinimum(vector<int> arr){
          //1.brute force method
   /*int min=arr[0];
    for(int i=0;i<arr.size();i++){
            if (arr[i]<min){
                min=arr[i];
                cout<<" \n"<<min;
            }
     }
     return min;
     */
     if(arr[0]<arr[arr.size()-1]){
       return arr[0];  // if array is not rotated
    //    added changes,if given array is not rotated or if any condition in which array is sorted then no need to check just return arr[0] element as minimum
     }

     //2.optimized solution using binary search
     int start=0,end=arr.size()-1;
     while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
            return mid;
        }else if(arr[mid]>arr[0]){
            start=mid+1;
        }else{
            end=mid-1;
        }
     }
     
}
int main(){

        /*  array is will rotated and have to find minimum element in  that rotated arrayarray
            if initially array is like this
            [1,2,3,4,5,6]
            after  1 rotation->array becomes->[,1,2,3,4,5]
            after 2 rotation->array becomes->[5,6,1,2,3,4]
            after 3 rotation->array becomes->[4,5,6,1,2,3]
            after 4 rotation->array becomes->[3,4,5,6,1,2]

            i have to find min element in this

            approach 
            1.brute force ->i will apply linear search to find minimum element in the array
                    time complexity will be o(n)->coz it traverse each element
            2.optimized solution
                my element's left and right should be greater than me then ,my element is minimum
                but when to move right and left
                if my element is greater than index 0's value then i have to move right to find minimum
                if my element is less  than index 0's value then i have to move left  to find minimum

        
        */

        // vector<int>arr={5,6,7,6,4,2,1,0};
        vector<int>arr={3,4,5,6,1,2};
    cout<<" ARRAY ELEMENTS ARE : \n";
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<< " ";
        }
    
        int minimum=RotatedMinimum(arr);
        cout<<"\nYour Minimum element in this array is present at  index  :"<<minimum<<"\n MINIMUM ELEMENT : "<<arr[minimum];
    return 0;
}