#include<bits/stdc++.h>
using namespace std;
/*
Functions are set of code which performs something for you 
functions are used to modularise code
Functions are used to increase readability
Functions are used to use same code multiple times
1. Void -> which does not return anything
2. Return
3. Parameterised
4. Non Parameterised*/


void printName(string name){
    cout << "Hey  " << name;
}
int main(){
    string name;
    cin >> name;
    printName(name);

    string name2;
    cin >> name2;
    printName(name2);
    return 0;
}