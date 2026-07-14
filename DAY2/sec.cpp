#include<iostream>
using namespace std;
int main(){
    int x=5,y=10;
    // cout<<x&&y;
    // cout<<x||y;
// asking user for input
int a;
    cout<<"enter a number : "<<endl;
    cin>>a;
    
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;
    if(age>=18 && age<=120){
        cout<<"you an watch a A rated movie"<<endl;
    }else{
        cout<<"you cannot watch A rated movie\n";
    }
        cout<<x&&y;

    //if 
    int marks;
    cout<<"enter your marks\n";
    cin>>marks;

    if(marks>45){
        cout<<"you have passed\n";
    }
    
    //if else
    bool hotelRoomAvailable=!false;
    if(hotelRoomAvailable){
        cout<<"welcome sir,Here's Your Room Key for 121\n";
    }else{
        cout<<"Sorry Sir!!Rooms are not available\n";
    }

    //if else if
    string day;
    cout<<"enter today's day\n";
    cin>>day;
    if(day=="sunday"|| day=="saturday"){
        cout<<"time for chillax mood\n";
    }else if(day=="monday" || day=="tuesday"||
             day=="wednesday"|| day=="thursday"
            ||day=="friday"){
        cout<<"time to go college\n";
    }else{
        cout<<"invalid day\n";
    }

        // nested if
         string isCollege;
         cout<<"is there any college today?\n";
         cin>>isCollege;
         if(isCollege=="yes"){
            string isClass;
            cout<<"Is class is there?\n";
            cin>>isClass;
            if(isClass=="yes"){
                cout<<"go to class";
            }else{
                cout<<"go to playground\n";
            }
         }else{
            cout<<"Stay at Home!\n";
         }

         //switch statement
         int month;
         cout<<"Enter Your Month(in Number): \n";
         cin>>month;
         switch(month){
            case 1:cout<<"Its January\n";break;
            case 2:cout<<"Its Febuary\n";break;
            case 3:cout<<"Its March\n";break;
            case 4:cout<<"Its April\n";break;
            case 5:cout<<"Its May\n";break;
            case 6:cout<<"Its June\n";break;
            case 7:cout<<"Its July\n";break;
            case 8:cout<<"Its August\n";break;
            case 9:cout<<"Its September\n";break;
            case 10:cout<<"Its October\n";break;
            case 11:cout<<"Its November\n";break;
            case 12:cout<<"Its December\n";break;
            default:cout<<"Invalid month";
         }

return 0;

        }