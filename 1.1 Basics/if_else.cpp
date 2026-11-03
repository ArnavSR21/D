#include<bits/stdc++.h>

using namespace std;
//wap program that takes an input of age 
// and prints if you are adult or not
int main(){
    int x;
    cout<<"Enter age : ";
    cin>>x;
    if(x >= 18){
        cout<<"You're an adult";
    }
    else{
        cout<<"You're minor";
    }
    return 0;
}