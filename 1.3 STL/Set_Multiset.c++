#include<bits/stdc++.h>
using namespace std;

void explainSet() {
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(). end(). rbegin(). rend(). size(),
    // empty() and swap() are same as those above 

    // {1,2,3,4,5}
    auto it = st.find(3);

    //{1,2,3,4,5}
    auto it = st.find(6);

    // {1,4,5}
    st.erase(5); // erase 5 // takes logaithmic time 

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1,4,5} [first, last)

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does.

    // This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
    
}




void explainMultiSet(){
    // everything is same as set
    // only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1's are erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1));

    // rest all functions are same as set
}



void explainUSet(){
    //unordered set<int> st;
    //lower_bound and upper_bound function
    //does not works, rest all functions are same
    // as above, it does not store in any
    //particular order it has a better complexity
    //than set in most cases, expect some when collision happens

}



void explainMap() {

    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map<pair<int,int>,int> mpp;

    mpp[1] = 2; 
   //mpp.emplace({3,1});

   mpp.insert({2,4});

   //mpp[{2,3}] = 10;

//    {
//     {1,2}
//     {2,4}
//     {3,1}
//    }
    // for(auto it : map){
    //     cout << it.first << " " << it.second << endl;
    // }

    // cout << mpp[1];
    // cout << mpp[5];

    // auto it = mpp.find(3);
    // //cout << *(it). second;

    // auto it = mpp.find(5);

    // // this is the syntax
    // auto it = mpp.lower_bound(2);

    // auto it = mpp.upper_bound(3);

    // //erase,swap,size,empty, are same as above 
}


void explainMultimap() {
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}


void explainUnorderedMap(){
    // same as Set and unordered_Set difference;
}

// bool comp(pair<int,int>)p1,pair<int,int>p2 {
//     if(p1.second < p2.second) {
//         return true;
//     } else if(p1.second == p2.second){
//         if(p1.first>p2.second) return true;
//     }
//     return false;
// }


void explainExtra(){

    //sort(a, a + n);
    //sort(v.begin(), v.end());
    
    //sort(a+2, a+4);

    //sort(a, a+n, greater<int>);

    //pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};

    //sort it according to the second element 
    //if second element is same, then sort
    //it according to the first element but in descending 

    //sort(a, a+n, comp);

    // {4,1}, {2,1}, {1,2};

    //int num = 7;
    //int cnt = __builtin_popcount();
    
    //long long num = 167889973448658;
    //int cnt = __builtin_popcount();

    //string s = "123";

    // do {
    //      cout << s << endl;
    //}while(next_permutation(s.begin(), s.end()));

    // int maxi = *max_element(a,a+n);
}

int main() {
    explainSet();
    explainMultiSet();
    explainUSet();
    explainMultimap();
    explainUnorderedMap();
    explainExtra();
    return 0;
}