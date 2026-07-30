#include<iostream>
#include<vector>
using namespace std;

int main(){
        /* how to create array using vector in CPP

        Vectors are dynamic arrays in C++ that can grow or shrink in size automatically.
     They are part of the Standard Template Library (STL) and provide more flexibility than regular arrays.

        */
       // 1. Empty vector
         vector<int> v1;
    
        // 2. Vector with size
        vector<int> v2(5);           // 5 elements, initialized to 0
                        
         // 3. Vector with size and initial value
                vector<int> v3(5, 10);       // 5 elements, all = 10
                        
        // 4. Vector from array
        int arr[] = {1, 2, 3, 4, 5};
         vector<int> v4(arr, arr + 5);
                        
         // 5. Vector from another vector
          vector<int> v5(v4);
                        
         // 6. Initializer list (C++11)
        vector<int> v6 = {1, 2, 3, 4, 5};
        vector<int> v7{1, 2, 3, 4, 5};

            vector<int>arr1;
            vector<int>arr2(10,0);
            vector<int>arr3(10);  
            vector<int>arr4={1,2,3,4,5};    
            
            
            arr1.push_back(20);
            arr1.push_back(30);
            arr1.push_back(50);
            int size=arr1.size();

            for(int i=0;i<size;i++){
                cout<<arr1[i]<<" ";

            }

            int size1;
            cout<<"enter array size: ";
            cin>>size1;
            int ele;

            vector<int>arr5(size1);
            for(int i=0;i<size1;i++){
               cin>>arr5[i];
            }
             for(int i=0;i<size;i++){
                cout<<arr5[i]<<" ";

            }


    return 0;
}