#include<iostream>
#include<vector>
using namespace std;
int main(){

    /* insertion sort
    
        arr[3 ,2 ,1 4,5]->sort to->[1,2,3,4,5]

        steps;
        [2,3,1,4,5]
        [1,2,3,4,5]
        1,2,3,4,5 break;
    
    */

    // vector<int>arr11(5,0);
    // arr11.push_back(3);
    // arr11.push_back(2);
    // arr11.push_back(1);
    // arr11.push_back(4);
    // arr11.push_back(5);
    //  int n=arr11.size();
     int insert[5]={3,2,1,4,5};
     int n=5;
    cout<<"Array before sorting"<<"\n";
    for(int i=0;i<n;i++){
        cout<<insert[i]<<" ";
    }
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j>0;j--){
            if(insert[j]<insert[j-1]){
               int temp=insert[j];
               insert[j]=insert[j-1];
               insert[j-1]=temp;
            }else{
                break;
            }
        }
    }

    cout<<"\nArray before sorting\n";
     for(int i=0;i<n;i++){
        cout<<insert[i]<<" ";
    }

    return 0;
}