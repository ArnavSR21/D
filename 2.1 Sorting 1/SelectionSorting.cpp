#include<bits/stdc++.h>
using namespace std;

// example arr[i] = [13,46,24,52,20,9]
// Selection sorting means Arrange the array in sorted manner
// like smallest to largest 

// step 1: select the minimum and swap
// step 2: like select the second minimum and swap
// And go on till you get the sorted array 

void selection_sort(int arr[], int n) {
    for(int i = 0; i <= n - 2; i++){
        int minimum = i;
        for(int j=i;j<=n-1;j++) {
            if(arr[j] < arr[minimum]) {
                minimum = j;
            }
        }
        int temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    selection_sort(arr, n);
    for(int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}