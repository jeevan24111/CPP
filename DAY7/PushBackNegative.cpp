#include<vector>
#include<iostream>
using namespace std;

int main(){

    vector<int>arr(5);
    arr={42,-42,0,42,-42};

     for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}