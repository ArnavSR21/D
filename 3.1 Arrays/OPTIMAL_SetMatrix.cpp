#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> setZero(vector<vector<int>> &arr, int n, int m) {
   // int col[m] = {0}; -> arr[0][..]
   // int row[n] = {0}; -> arr[..][0]
    int col0 = 1;
   for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(arr[i][j] == 0) {
                // mark the i-th row
                arr[i][0] = 0;
                // mark the j-th col
                if(j != 0)
                    arr[0][j] = 0;
                else 
                    col0 = 0;
            }
        }
   }
    for(int i=1;i<n;i++) {
        for(int j=1;j<m;j++) {
            if(arr[i][j] != 0) {
                // check for col & row
                if(arr[0][j] == 0 || arr[i][0] == 0 ) {
                    arr[i][j] = 0;
                }
            }
        }
    }
    if( arr[0][0] == 0 ) {
        for(int j=0;j<m;j++) arr[0][j] = 0;
    }
    if(col0 == 0) {
        for(int i=0;i<n;i++) arr[i][0] = 0;
    }

   return arr;
}

int main() {
    int n,m;
    cout << "Enter rows(n): ";
    cin >> n;
    cout << "Enter columns(m): ";
    cin >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    cout << "Enter the matrix elements: " << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> arr[i][j] ;
        }
    }

    vector<vector<int>> ans = setZero(arr, n, m);

    cout << "The final matrix is: " << "\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
    
}