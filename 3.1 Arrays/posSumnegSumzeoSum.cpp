#include<bits/stdc++.h>
using namespace std;

int main() {
    int posSum = 0, negSum = 0;
    int posCount = 0, negCount = 0, zeroCount = 0;
    
    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " Elements: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        if(arr[i] > 0){
            posSum += arr[i];
            posCount++;
        }
        else if(arr[i] < 0){
            negSum += arr[i];
            negCount++;
        }
        else{
            zeroCount++;
        }
        cout << "Positive Sum: " << posSum << endl;
        cout << "Positive Count: " << posCount << endl;
        cout << "Negative Sum: " << negSum << endl;
        cout << "Negative Count: " << negCount << endl;
        cout << "Zero Count: " << zeroCount << endl;
    }
    return 0;
}