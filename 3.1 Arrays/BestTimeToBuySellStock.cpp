#include<bits/stdc++.h>
using namespace std;

int Profit(vector<int> &arr, int n) {

    if(n <= 1) return 0;

    int mini = arr[0];
    int Maxprofit = 0;

    for(int i=0;i<n;i++) {
        int cost = arr[i] - mini;
        Maxprofit = max(Maxprofit, cost);
        mini = min(mini, arr[i]);
    }
    return Maxprofit;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " Elements: " ;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int Stock = Profit(arr, n);
    cout << "The profit is: " << Stock << endl;
    return 0;
}