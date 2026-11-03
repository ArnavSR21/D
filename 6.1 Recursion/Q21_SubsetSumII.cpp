#include<bits/stdc++.h>
using namespace std;

void findSubSet(int ind, vector<int> &arr, vector<int> &ds ,vector<vector<int>> &ans) {
    ans.push_back(ds);
    for(int i=ind;i<arr.size();i++) {
        if(i != ind && arr[i] == arr[i-1]) continue;

        ds.push_back(arr[i]);

        findSubSet(i+1,arr,ds,ans);
        ds.pop_back();
    }
}

vector<vector<int>> subSet(vector<int> &arr) {
    vector<vector<int>> ans;
    vector<int> ds;

    sort(arr.begin(),arr.end());

    findSubSet(0,arr,ds,ans);

    return ans;
}

int main() {
    vector<int> arr = {1,2,3,4,5};

    vector<vector<int>> result = subSet(arr);

    cout << "Unique Subsets: " << endl;
    for(int i=0;i<result.size();i++) {
        cout << "[ ";
        for(int j=0;j<result[i].size();j++) {
            cout << result[i][j] << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}