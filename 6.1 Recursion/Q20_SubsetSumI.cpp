#include<bits/stdc++.h>
using namespace std;

void f(int ind, int sum, vector<int> &arr, int N, vector<int> &sumSubset) {
    if(ind == N) {
        sumSubset.push_back(sum);
        return;
    }
    f(ind+1,sum + arr[ind], arr, N, sumSubset);

    f(ind+1,sum,arr,N,sumSubset);
}

vector<int> subsetSum(vector<int> arr, int N) {
    vector<int> sumSubset;

    f(0,0,arr,N,sumSubset);

    sort(sumSubset.begin(),sumSubset.end());

    return sumSubset;
}

int main() {
    vector<int> arr = {2,3}; 
    int N = arr.size();

    vector<int> result = subsetSum(arr, N);

    cout << "Subset sums: ";
    for(int i=0;i<result.size();i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}