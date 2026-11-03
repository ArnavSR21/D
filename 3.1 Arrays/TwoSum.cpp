#include<bits/stdc++.h>
using namespace std;

string TwoSum( vector<int> &arr, int target) {
    
    // OPTIMAL SOLn

    int n = arr.size();
    int left = 0, right = n-1;
    sort(arr.begin(), arr.end());
    while(left < right ) {
        int sum = arr[left] + arr[right];
        if(sum == target) {
            return "YES";
        }
        else if(sum < target) left++;
        else right--;
    }
    return "NO";

//----------------------------------------------------

    // BETTER SOLn

    // int n = arr.size();
    // map<int, int> mpp;

    // for(int i=0;i<n;i++) {
    //     int a = arr[i];
    //     int more = target - a ;
    //     if(mpp.find(more) != mpp.end()){
    //         return "YES"; // return{mpp[more], i}
    //     }
    //     mpp[a] = i;
    // }
    // return "NO";

//----------------------------------------------------

    // BRUTE SOLn 

    // int n = arr.size();
    // for(int i=0;i<n;i++) {
    //     for(int j=i+1;j<n;j++) {
    //         if(arr[i] + arr[j] == target) {
    //             return {i,j};
    //         }
    //     }
    // }
    // return {-1,-1};
}


int main() {
    int n;
    cout << "Enter n: ";
    cin >>n;

    vector<int> arr(n);
    cout << "Enter " << n << " Elements: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter Target: ";
    cin >> target;

    cout << TwoSum(arr, target) << endl;
    
    return 0;
}