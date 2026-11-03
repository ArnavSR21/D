#include<bits/stdc++.h>
using namespace std;

void recurPermute(int index, vector<int> &nums, vector<vector<int>> &ans) {
    if(index == nums.size()) {
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++) {
        swap(nums[index], nums[i]);
        recurPermute(index+1,nums,ans);
        swap(nums[index],nums[i]);
    }
}

vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> ans;
    recurPermute(0,nums,ans);
    return ans;
}

int main() {

    vector<int> nums = {1,2,3};

    vector<vector<int>> result = permute(nums);

    cout << "All permutations: ";
    for(int i=0;i<result.size();i++) {
        cout << "[ ";
        for(int j=0;j<result[i].size();j++) {
            cout << result[i][j] << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}