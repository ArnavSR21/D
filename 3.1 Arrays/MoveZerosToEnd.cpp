#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros(vector<int> &arr, int n) {
    // OPTIMAL APPROACH

    int j = -1;
    for(int i=0;i<n;i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }
    // no non zero numbers
    if(j == -1) return arr;

    for(int i=j+1;i<n;i++) {
        if(arr[i] != 0) {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;

    // BRUTE SOLUTION
    // Step -> 1
    // vector<int> temp;
    // for(int i=0;i<n;i++) {
    //     if(arr[i] != 0) {
    //         temp.push_back(arr[i]);
    //     }
    // }

    // // Step -> 2
    // int nonZeros = temp.size();
    // for(int i=0;i<nonZeros;i++) {
    //     arr[i] = temp[i];
    // }

    // // Step -> 3
    // for(int i=nonZeros;i<n;i++) {
    //     arr[i] = 0;
    // }

    // return arr;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " Elements ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    moveZeros(arr ,n );
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

    return 0; 
}