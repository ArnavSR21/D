#include<bits/stdc++.h>
using namespace std;

void printS(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> ds) {
    if(ind == arr.size()) {
        if(target == 0) {
            ans.push_back(ds);
        }
        return ;
    }

    if(arr[ind] <= target) {
        ds.push_back(arr[ind]);
        printS(ind, target - arr[ind], arr, ans, ds);
        ds.pop_back();

    }
    printS(ind+1,target,arr,ans,ds);
}

int main() {
    vector<int> candidates = {2,3,6,7};
    int target = 7;

    vector<vector<int>> ans;
    vector<int> ds;

    printS(0, target, candidates, ans, ds);

    cout << "The combinations are: " << endl;
    for(int i=0;i<ans.size();i++) {
        for(int j=0;j<ans[i].size(); j++) {
            cout << ans[i][j] << " ";

        }
        cout << endl;
    }

    return 0;
}