#include<bits/stdc++.h>
using namespace std;
/*
Functions are set of code which perform something for you
Functions are used to modularise code 
Functions are used to increase reliability
Functions are used to use same code multiple times
Void -> which does not return anything
Return
Parameterised
Non Parameterised
*/
void sum(int num1, int num2){
    int num3 = num1 + num2;
    cout << num3;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    sum(num1, num2);
    return 0;
}