#include<bits/stdc++.h>
using namespace std;

void eplainList(){
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}
    
    ls.push_front(5); // {5, 2, 4}

    ls.emplace_front(); // {2, 4}

    // rest functions same as vectors 
    // begin, end , rbegin , rend, clear , insert, size , swap
}

int main() {

}