#include<iostream>
using namespace std;
int SquareRootOfNumber(int n){

    int x;
        if(n<0){
            cout<<"No square root exits";
            return  -1;
        }
     
    if(n==1 ||n==0){
        return 1;
    }
     int start=1,end=n;
     while(start<=end){
        int mid=start+(end-start)/2;
        if(mid==n/mid){    //n*n will coz overflow
            return mid;
        }else if(mid*mid>n){
            end=mid-1;
        }else{
            x=mid;
            start=mid+1;
        }
     }
   



    return x;

}

int main(){

    cout<<"Enter a number to find its square root\t :";
    int num;
    cin>>num;
    int root=SquareRootOfNumber(num);
    cout<<"\nSquare Root of "<<num<<"  is "<<root;

    return 0;

}