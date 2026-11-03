#include<bits/stdc++.h>
using namespace std;
// write a program that takes an input of age 
// and prints if you are adult or not
int main(){
    int x;
    cout << " Enter age : ";
    cin >> x;
    if( x >= 18 ){
        cout << " you are an adult ";
    }    
    else{
        cout << " you are not an adult ";
    }
    return 0;
}