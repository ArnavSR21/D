#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr, int n) {
    int largest =  arr[0];
    int slargest = -1;
    for(int i=1;i<n;i++) { 
        if(arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int> &arr, int n) {
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=1;i<n;i++) {
        if(arr[i] < smallest){
        ssmallest = smallest;
        smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < ssmallest) {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
} 

vector<int> getSecondOrderElements(int n, vector<int> &arr) {
    int slargest = secondLargest(arr, n);
    int ssmallest = secondSmallest(arr, n);
    return {slargest, ssmallest};
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter Elements: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    vector<int> result = getSecondOrderElements(n, arr);
    cout << "Second largest: " << result [0] << endl;
    cout << "Second Smallest: " << result [1] << endl;
    return 0;
}