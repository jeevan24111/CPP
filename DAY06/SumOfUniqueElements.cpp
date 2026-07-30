#include<iostream>
using namespace std;

int SumOfUnique(int arr[],int n){
    int freq[100]={0};

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    //  for(int i=0;i<5;i++){
    //     cout<<freq[i]<<" ";  ->got all elements frequency  [0 2 2 1 0]
    // }
    int sum=0;
    for(int i=1;i<=n;i++){
        if(freq[i]==1){
            //gives index of unique elements
            cout<<i<<"  \n";
            sum+=arr[freq[i+1]];
        }

    }
    return sum;
}

int main(){
    int sum[5]={1,4,3,1,2};

    int res=SumOfUnique(sum,5);
    cout<<"Sum OF UNIQUE Elements is : "<<res;
}