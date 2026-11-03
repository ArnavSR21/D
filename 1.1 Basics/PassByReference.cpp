#include<bits/stdc++.h>
using namespace std;

void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;

    // aaray always pass by reference 
}
int main(){
    int n = 5;
    int arr[5];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    doSomething(arr, n);

    cout << "Value inside int main: " << arr[0] << endl;
    return 0;
}  