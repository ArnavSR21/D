#include<bits/stdc++.h>
using namespace std;

// Eg. array used in this is {4,6,2,5,7,9,1,3}

// Step 1. pick a pivot and place it in its correct place in the sorted array
// a. 1st element m the array
// b. last element in the array
// c. median of the array
// d. random element of the array

// Step 2. smaller on the left and larger on the right

// Step 3. repeat these steps untill you get a sorted array

int partition(vector<int> &arr, int low , int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j) {
        while(arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while(arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pIndex = partition(arr, low , high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> &arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " Elements";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    quickSort(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}