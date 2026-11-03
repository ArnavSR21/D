#include<bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
    for(int j=0;j<m;j++) {
        if(matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
    for(int i=0;i<n;i++) {
        if(matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

vector<vector<int>> setZeroes(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(matrix[i][j] == 0) {
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

int main() {
    int n,m;
    cout << "Enter rows(n): ";
    cin >> n;
    cout << "Enter columns(m): ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter the matrix elements" << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> ans = setZeroes(matrix);

    cout << "The final matrix is : " << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}