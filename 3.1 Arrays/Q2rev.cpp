#include<bits/stdc++.h>
using namespace std;

int Secondlargest(vector<int> &arr) {

    // OPTIMAL APPROACH 
    

    // BRUTE APPROACH
   
    sort(arr.begin(), arr.end());
    int n = arr.size();
    return arr[n-2];
}

int main() {
   int n;
   cin >> n;

   vector<int> arr(n);
   for(int i=0;i<n;i++) {
    cin >> arr[i];
   }

   int Slargest = Secondlargest(arr);
   cout << "Second Largest Element is : " << Slargest << endl;
   return 0;
}