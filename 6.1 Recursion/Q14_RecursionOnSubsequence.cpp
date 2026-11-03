#include<bits/stdc++.h>
using namespace std;

void f(int index, vector<int> &ds, int arr[], int n) {
    if(index == n) {
        for(auto it : ds) {
            cout << it << " ";
        } 

        if(ds.size() == 0) {
            cout << "{}";
        }
        
        cout << endl;
        return;
    }
    
    // take or pick the particular index into the subsequence

    ds.push_back(arr[index]);
    f(index+1,ds,arr,n);
    ds.pop_back();

    // not pick or not take the condition this element is not added to your subsequenec

    f(index+1, ds, arr, n);
}

int main() {
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ds;

    f(0, ds, arr, n );

    return 0;
}