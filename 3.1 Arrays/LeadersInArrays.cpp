#include<bits/stdc++.h>
using namespace std;

vector<int> leadersInArray(vector<int> &arr, int n) {

    // OPTIMAL APPROACH

    vector<int> ans;
    int maxi = INT_MIN;

    for(int i=n-1;i>=0;i--) {
        if( arr[i] > maxi ) {
            ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }

    sort(ans.begin(), ans.end());
    return ans;

//----------------------------------------------------

    // BRUTE SOLUn
    
    // vector<int> ans;

    // for(int i=0;i<n;i++) {
    //     bool leader = true;

    //     for(int j=i+1;j<n;j++) {
    //         if(arr[j] > arr[i]) {
    //             leader = false;
    //             break;
    //         }
    //     }
    //     if(leader) {
    //         ans.push_back(arr[i]);
    //     }
    // }
    // return ans;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " Element: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    vector<int> leader = leadersInArray(arr, n);

    cout << "The leaders are: ";
    for(int i=0;i<leader.size();i++) {
        cout << leader[i] << " ";
    }
    cout << endl;

    return 0;
}