#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(true){
        string str;
        getline(cin, str);
        if(str == ".") break;
        stack<char> s;
        bool valid = true;
        for(auto c : str) {
            if (c == '(' || c == '[') s.push(c);
            else if (c == ')'){
                if(s.empty() || s.top() != '('){
                    valid = false;
                    break;
                }
                s.pop();
            }
            else if (c == ']'){
                if(s.empty() || s.top() != '['){
                    valid = false;
                    break;
                }
                s.pop();
            }
        }
        if(!s.empty()) valid = false;
        if(valid) cout << "yes\n";
        else cout << "no\n";
    }
}