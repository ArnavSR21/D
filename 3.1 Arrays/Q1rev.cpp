#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    
    // OPTIMAL APPROACH
    int max = arr[0];
    for(int i=0;i<n;i++ ){
        if(max < arr[i]) max = arr[i];
    }
    return max;


    // BRUTE APPOACH
    
    // sort(arr.begin(), arr.end());
    // return arr[n-1];
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int largest =  largestElement(arr, n);
    cout << largest << endl;
    return 0;
}