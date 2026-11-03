#include<bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> &a, int num) {
    for(int i=0;i<a.size();i++) {
        if(a[i] == num) {
            return true;
        }
    }
    return false;
}

int longest_cs(vector<int> &arr, int n) {
    if(n == 0){
        return 0;
    }

    int longest = 1;

    for(int i=0;i<n;i++) {
        int x = arr[i];
        int cnt = 1;

        while(linearSearch(arr, x+1) == true){
            x += 1;

            cnt += 1;
        }
        longest = max(longest, cnt);
    }
    return longest;
    
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " Elements: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }


    int ans = longest_cs(arr, n);
    cout << "Longest consecutive sequence is: " << ans << endl;
    return 0;
}