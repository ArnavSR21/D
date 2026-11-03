#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int getSingleElement(vector<int>& arr) {
        int n = arr.size();
        // OPTIMAL

        int xorr = 0;
        for(int i=0;i<n;i++) {
            xorr = xorr ^ arr[i];
        }
        return xorr;
        
        
        // BRUTE

        // for(int i=0;i<n;i++) {
        //     int num = arr[i];
        //     int cnt = 0;


        //     for(int j=0;j<n;j++) {
        //         if(arr[j] == num) 
        //             cnt++;
        //     }

        //     if(cnt == 1) return num;
        // }

        // return -1;
    }
};


int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " Elements: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    Solution obj;
    int ans = obj.getSingleElement(arr);

    cout << "The single element is: " << ans << endl;
    return 0;
}