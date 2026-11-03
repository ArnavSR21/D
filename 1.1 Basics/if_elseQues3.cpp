#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"Enter age : ";
    cin>>x;
    if(x < 18){
        cout<<"not eligible for job !";
    }
    else if(x <= 57){
        cout << "eligible for job";
        if(x>=55){
            cout<<", but retirement soon";
        }
    }
    else{
        cout<<"retirement time";
    }
    return 0;
}