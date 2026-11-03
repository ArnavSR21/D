#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<string> &board, int n) {
    int duprow = row;
    int dupcol = col;

    while(row >= 0 && col >= 0) {
        if(board[row][col] == 'Q') return false;
        row--;
        col--;
    }
    row = duprow;
    col = dupcol;

    while (col >= 0) {
        if(board[row][col] == 'Q') return false;
        col--;
    }

    row = duprow;
    col = dupcol;

    while(row < n && col >= 0) {
        if(board[row][col] == 'Q') return false;
        row++;
        col--;
    }

    return true;
}

void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n) {
    
    if (col == n) {
        ans.push_back(board);
        return;
    }

    
    for (int row = 0; row < n; row++) {
        if (isSafe(row, col, board, n)) {
            board[row][col] = 'Q';          
            solve(col + 1, board, ans, n);  
            board[row][col] = '.';          
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for(int i=0;i<n;i++) {
        board[i] = s;
    }
    solve(0, board, ans, n);
    return ans;
}

int main() {
    int n = 4;
    vector<vector<string>> solutions = solveNQueens(n);

    cout << "Total solutions found for " << n << "-Queens: " << solutions.size() << endl;

    for(int i=0;i<solutions.size();i++) {
        cout << "Arrangment " << i + 1 << " : " << endl;
        for(int j=0;j<solutions[i].size();j++) {
            cout << solutions[i][j] << endl;
        }
        cout << endl;
    }
    return 0;
}