#include<bits/stdc++.h>
using namespace std;

void RearrangeArray(vector<int> &arr, int n) {

    // OPTIMAL APPROACH

    vector<int> ans (n, 0);
    int pos = 0, neg = 1;

    for(int i=0;i<n;i++) {
        if(arr[i] > 0) {
            ans[pos] = arr[i];
            pos += 2;
        }
        else {
            ans[neg] = arr[i];
            neg += 2;
        }
    }
    arr = ans;


    // BRUTE APPROACH

    // vector<int> pos;
    // vector<int> neg;

    // for(int i=0;i<n;i++) {
    //     if(arr[i] > 0) {
    //         pos.push_back(arr[i]);
    //     }
    //     else {
    //         neg.push_back(arr[i]);
    //     }
    // }
    // for(int i=0;i<n/2;i++) {
    //     arr[2*i] = pos[i];
    //     arr[2*i+1] = neg[i];
    // }

}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " Elements : ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    RearrangeArray(arr, n);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}