#include<bits/stdc++.h>
using namespace std;

// this pushes the maxm to the last bu adjacent swaps
// step 1: pushes the maxm element to the last
// step 2: push the second maxm element to the last
// and go on untill the array is sorted

void bubble_sorting(int arr[], int n){
    for(int i=n-1;i>=1;i--) {
        for(int j=0;j<=i-1;j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }
    
    bubble_sorting(arr, n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}