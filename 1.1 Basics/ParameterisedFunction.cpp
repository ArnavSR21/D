#include<bits/stdc++.h>
using namespace std;

void printName(string name){
    cout << "Hey " << name << endl;
}
int main(){
    string name;
    cout << "Enter name : ";
    cin >> name;
    printName(name);

    string name2;
    cout << "Enter name 2 : ";
    cin >> name2;
    printName(name2);
    return 0;
}