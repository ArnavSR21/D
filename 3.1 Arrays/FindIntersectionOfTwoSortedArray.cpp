#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n1,
vector<int> &arr2 , int n2) {

    // OPTIMAL APPROACH

    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i<n1 && j<n2) {
        if(arr1[i] < arr2[j]) {
            i++;
        }
        else if(arr2[j] < arr1[i]) {
            j++;
        }

        else {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;

    // BRUTE APPROACH

    // vector<int> ans;
    // int vis[n2] = {0};
    // for(int i=0;i<n1;i++) {
    //     for(int j=0;j<n2;j++) {
    //         if(arr1[i] == arr2[j] && vis[j] == 0) {
    //             ans.push_back(arr1[i]);
    //             vis[j] = 1;
    //             break;
    //         }

    //         if(arr2[j] > arr1[i]) break;
    //     }
    // }
    // return ans;
}

int main() {
    int n1;
    cout << "Enter n1: ";
    cin >> n1;

    vector<int> arr1(n1);
    cout << "Enter " << n1 << " Elements";
    for(int i=0;i<n1;i++) {
        cin >> arr1[i];
    }

    int n2;
    cout << "Enter n2: ";
    cin >> n2;

    vector<int> arr2(n2);
    cout << "Enter " << n2  << " Elements";
    for(int i=0;i<n2;i++) {
        cin >> arr2[i];
    }

    vector<int> result = findArrayIntersection(arr1, n1, arr2, n2);
    cout << "Intersection = ";
    for(int i=0;i<result.size();i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}