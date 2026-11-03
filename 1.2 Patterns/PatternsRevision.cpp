#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i = 0; i <n ; i++){
        for(int j = 0; j <n ; j++){
            cout << " *";
        }
        cout << endl;
    }
}
void print2(int n){
    for(int i = 0; i <n ; i++){
        for(int j = 0; j<=i; j++){
            cout << " *";
        }
        cout << endl;
    }
}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<= n-i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << j ;
        }
        cout << endl;
    }
}
void print7(int n){
    for(int i=0;i<n;i++){
        // space 
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        // star 
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        //sapce 
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void print8(int n){
     for(int i=0;i<n;i++){
      for(int j=0;j<i;j++){
         cout << " ";
      }
      for(int j=0;j<2*n-(2*i+1);j++){
         cout << "*";
      }
      for(int j=0;j<i;j++){
         cout << " ";
      }
      cout << endl;
   }
}
void print10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print11(int n){
    int start = 1;
    for(int i=0;i<n;i++){
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j=0;j<=i;j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}   
void print12(int n){
    for(int i=1;i<=n;i++){
        // numbers
        for(int j=1;j<=i;j++){
            cout << j ;
        }
        // space
        for(int j=1;j<=2*(n-i);j++){
            cout << " ";
        }
        // numbers
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }
}
void print13(int n){
    int number = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << number << " ";
            number = 1 + number;
        }
        cout << endl;
    }
}
void print14(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ // (for char ch = 'A'; ch <= 'A' + i ; ch++)
            cout << (char)(j+64) << " "; // cout << ch;
        }
        cout << endl;
    }
}
void print15(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){ // (for char ch = 'A'; ch <= 'A' + (n-i+1) ; ch++)
            cout<<(char)(j+64);    // cout << ch;
        }
        cout << endl;
    }
}
void print16(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << (char)(i+64);
        }
        cout << endl;
    }
}
void print17(int n){
    for(int i=0;i<n;i++){
        //spacee
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        // aplhabets
        char ch = 'A';
        int breakpoint = (2*i+1) / 2;
        for(int j=1;j<=2*i+1; j++){
            cout <<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }

        // space
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void print18(int n){
    for(int i=0;i<n;i++){
        for(char ch = 'E' - i;ch <= 'E';ch++){
            cout << ch;
        }
        cout << endl;
    }
}
void print19(int n){
    for(int i=0;i<2*n;i++){
        if(i<n){
            // star
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        // space
        for(int j=0;j<2*i;j++){
            cout << " ";
        }
        // star
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        }
        else{
            // stars
        for(int j=0;j<i-n+1;j++){
            cout << "*";
        }
        // space
        for(int j=0;j< 2 * (2 * n - 1 - i);j++){
            cout << " ";
        }
        // star
        for(int j=0;j<i-n+1;j++){
            cout << "*";
        }
        }
        cout << endl;
    }
}
void print20(int n){
    int spaces = 2*n-2;
    for(int i=1 ; i<=2*n-1 ; i++){
        int stars = i;
        if(i > n) stars = 2*n - i ; 
        // stars
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        // spaces
        for(int j=1;j<=spaces;j++){
            cout << " ";
        }
        // stars
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
        if(i < n) spaces -= 2;
        else spaces += 2;
    }
}
void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( i == 0 || j == 0 || i == n-1 || j == n-1){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}
void print22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2) - j;
            int down = (2*n-2) - i;
            cout << (n - min(min(top,down),min(left,right)));
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print22(n);
    }
}