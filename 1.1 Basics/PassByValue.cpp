#include<bits/stdc++.h>
using namespace std;

void doSomething(string str){
    str[0] = 'P';
    cout << str << endl;
}
int main(){

    string str = "Arnav";
    doSomething(str);
    cout << str << endl;
    return 0;
}