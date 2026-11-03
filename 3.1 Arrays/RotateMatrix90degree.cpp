#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate90degree(vector<vector<int>> &arr, int n, int m) {
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i=0;i<n;i++) {
        // row is arr[i]
        reverse(arr[i].begin(), arr[i].end());
    }
    return arr;
}

int main() {
    int n, m;
    cout << "Enter rows(n): ";
    cin >> n;
    cout << "Enter columns(m): ";
    cin >> m;

    vector<vector<int>> arr(n, vector<int> (m));
    cout << "Enter the matrix elements: ";
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> ans =  rotate90degree(arr, n, m);

    cout << "The final matrix is: " << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}