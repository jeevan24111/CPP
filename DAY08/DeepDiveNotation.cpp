#include<iostream>
using namespace std;

int main(){
    /*
    
         what is->Big O 

        [  equal or upper bound values ]


         for(int i=0;i<n;i++){
            cout<<"hello"    -time complexity o(n)

            f(x)=o(n)
       }

        ->big o is n or n^2 or n^3 or  equal to n or greater n


        for(int i=0;i<n^2;i++){
            cout<<"hello"    -time complexity =o(n^2);
       }
            big o is n^2 or n^3 or  equal to n^2 or greater n^2


        for(int i=0;i<n^3;i++){
            cout<<"hello"    -time complexity =o(n^3);
       }
            big o  n^3 or  equal to n^3 or greater n^3




    big o is n or n^2 or n^3 or  equal to n or greater n
    because it does not cross its time complexity
    if tc is n then i can easily say it big o is  n^2 or n^3 because it does not cross n
    Big o says tell me upperbound which it do not cross
        all are valid
    upper bound ->i will not cross my calculated time complexity
    ->real=equal to me or less than of me

    for interview->just calculate time complexity and add O(TC); no BS;

-----------------------------------------------------------------------------------------------------------
    eg: i calculated TC as n^2
        now in interview just say O(n^2)
        no need to tell extra 
    
    now as per my learning->
        u can say o(n^3),O(n^4) ore more it is valid
        because  i know o(n^2) cannot cross o(n^3) or O(n^4) or more than of this ;


    big 0=>upper bound ->algorithm->equal or below
        if i say o(n^4) for o(n^2)
        n^2 is below then it is valid right

          if i say o(n^3) for o(n^2)
        n^2 is below then it is valid right
--------------------------------------------------------------------------------------------------------------

        OMEGA

        ->lower bound
        ->equal to me or above me

        if i say o(1) for o(n)
        n is above  then it is valid right

        if i say o(n) for o(n^3)
        n is above  then it is valid right


    big o->n^5
         ->n^4
         ->n^3
    omega->o(n^2)
        ->o(n)
        ->o(1)


        big o->n^5->omega(n^5),theta(n^5),big_O(n^5)
         ->n^4
         ->n^3                  all are valid 
    omega->o(n^2)
        ->o(n)->n^5->omega(n),theta(n),big_O(n)
        ->o(1)
    
--------------------------------------------------------------------------------------------------------------

        Theta

        ->equal to me

         if i say o(n) for o(n)
        n is qual then it is valid right


        all are valid 

      big o->n^5->omega(n^5),theta(n^5),big_O(n^5)
         ->n^4
         ->n^3                 
     theta ->o(n^2)->omega(n^2),theta(n^2),big_O(n^2)
     omega ->o(n)->omega(n),theta(n),big_O(n)
        ->o(1)

----------------------------------------------------------------------------------------
 LAST WORDS
  
 LETS ASSUME TIME COMPLEXITY I FOUND OUT FROM MY METHOD IS
      =O(N^2)

      NOW I  WANT  BIG-O(UPPER BOUND)
      IT SAYS->DO NOT CROSS MY BOUND
       EQUAL TO ME OR BELOW ME 
      IF I SAY O(N^4) OfoR o(N^2)
      IT IS VALID N^2 NEVER CROSS N^4


    NOW I  WANT  omega (LOWER BOUND)
      IT SAYS->DO NOT CROSS MY BOUND
       EQUAL TO ME OR above ME 
      IF I SAY O(N) OfoR o(N^2)
      IT IS VALID N^2 ABOVE  N
   
    NOW I  WANT  Theta (exact bound)
      IT SAYS->
       EQUAL TO ME 
      IF I SAY O(N^2) OfoR o(N^2)
      IT IS VALID.

        if i go above it is big-0
        if i go below it is omega
        if i say exact it is theta


        so i can add theta or omega or big-0 to my found complexity

         best=ans   ->so i can add theta or omega or big-0 to my found complexity
         worts=ans  ->so i can add theta or omega or big-0 to my found complexity
         average=ans->so i can add theta or omega or big-0 to my found complexity

         worst,best,avg concept and big-o,omega,theta concept are diff
    */


                

}