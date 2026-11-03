#include<bits/stdc++.h>
using namespace std;
 
void f(int left, int right, int arr[]) {
    if(left >= right) return ;

    swap(arr[left], arr[right]);

    f(left + 1, right - 1, arr);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter " << n << " Elements: ";
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    f(0,n-1,arr);

    cout << "Reversed Array: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}   