#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &arr, int n, int m) {
    int col[m] = {0};
    int row[n] = {0};

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(arr[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(row[i] || col[j] ) {
                arr[i][j] = 0;
            }
        }
    }
    return arr;
}

int main() {
    int n,m;
    cout << "Enter rows(n): ";
    cin >> n;
    cout << "Enter cloumns(m): ";
    cin >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    cout << "Enter the given matrix: " << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> ans = zeroMatrix(arr, n, m);

    cout << "The final matrix is: " << "\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}