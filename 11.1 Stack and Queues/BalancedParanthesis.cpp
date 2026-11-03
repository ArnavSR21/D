#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for(char c : s) {
        if(c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if(st.empty()) return false;

            char topChar = st.top();

            if((c == ')' && topChar == '(') ||
               (c == '}' && topChar == '{') || 
               (c == ']' && topChar == '[')) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {

    vector<string> Strings = {"()[{}]", "([)]", "(]", "({[]})"};

    for(string str : Strings) {
        cout << "String: \"" << str << "\" -> ";
        if(isValid(str)) {
            cout << "Balanced" << endl;
        }
        else {
            cout << "Not Balanced" << endl;
        }
    }

    return 0;
}