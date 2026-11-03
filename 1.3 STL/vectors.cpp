#include<bits/stdc++.h>
using namespace std;

void explainVector() {
    
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v1(5,100);

    vector<int> v1(5);

    vector<int> v2(5,20); //[20(0),20(1),20(2),20(3),20(4)]
    vector<int> v3(v2);

    // how to access the elements of a vector
                //iterator is just where the memory is lying
    vector<int>::iterator it = v.begin(); // example {20,10,15,6,7}
                            //v.begin points directly to the memory and * is used in front of the name to access it 
    it++; // this is used to move to next place like example its gonna move to 10 and *(it) 10 will be printed
    cout << *(it) << " ";

    it = it + 2; // this will move the element where it was to the next 2 places from there like here it was at 10 and 2 places from 10 is 6 in above exapmle
    cout << *(it) << " ";

    vector<int>::iterator it = v.end(); //this end will not point to 7 it will point somewhere after that then iff youll do it-- the it will point on 7
    // vector<int>::iterator it = v.rend(); 
    // vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout <<*(it) << " ";
    }

    for(auto it : v) {
        cout << it << " ";
    }
        //  |
        //  V   
    // {10,20,12,23}
    v.erase(v.begin()+1); // 20 will be erased

         // |        |
       //+2(V)       V +4
    // {10,20,12,23,35} 
    v.erase(v.begin() + 2, v.begin() + 4); // {10,20,35} [start,end)


    // Insert Function

    vector<int>v(2,100); // {100,100}
    v.insert(v.begin() , 300); // {300,100,100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50,50, 300, 10 ,10 ,100 ,100}

    // {10,20}
    cout << v.size(); //2

    //{10,20}
    v.pop_back(); // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30,40} v2 -> {10,20}
    
    v.clear(); // erases the entire vector
    cout << v.empty();

}

int main(){
    explainVector();
}