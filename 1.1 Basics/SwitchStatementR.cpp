#include<bits/stdc++.h>
using namespace std;
/*
Take the day no and print the corresponding day
for 1 print monday,
for 2 print tuesday and so on for 7 print sunday
*/
int main(){
    int day;
    cout << "Enter the number : ";
    cin >> day;
    if( day==1){
        cout<<"monday";
    }
    else if(day==2){
        cout<<"tuesday";
    }
    else if(day==3){
        cout<<"wednesday";
    }
    else if(day==4){
        cout<<"thursday";
    }
    else if(day==5){
        cout<<"friday";
    }
    else if(day==6){
        cout<<"saturday";
    }
    else{
        cout<<"sunday";
    }
    return 0;
}