#include<iostream>
using namespace std;


int main(){
        /*
                space complexity
                -means do i have taken extra space to solve my problem
        */

        for(int i=0;i<5;i++){
            cout<<i;
        }
        /*
            auxillary space
            (1)  space complexity for above  coz it has taken constant space for storing i=0
            but it's is always not like that

            another eg
            suppose i have array [1,4,2,3]->i have to reverse it ->[3,2,4,1]
        */

        int arr[4]={1,4,2,3,};// my input array


        int newarr[4]={0}; //extra array of n size is taken to solve my problem->memory allocated to it 
            //space complexity for this is O(n) or theta(n) or omega(n)


        int i=0,j=4-1; //storing variables->constant space

        for(i=0;i<5;i++){
            newarr[j]=arr[i];
            j--;
        }

cout<<"\n";
        for(i=0;i<5;i++){
            cout<<newarr[i];
        }



        /* last points on Time and Space Complexity
          initially find time  complexity from normal method and  just find them->best,worst and avg cases
          and just add any notation ot it (theta,omega or big-o)  it is correct
          focus on finding tc complexity ,dont worry about big-0,theta or omega

        */

    return 0;
}