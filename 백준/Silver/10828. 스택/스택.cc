#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    stack<int> stack;
    while(n--){
        string s;
        cin >> s;
        if(s == "push"){
            int a;
            cin >> a;
            stack.push(a);
        }
        else if(s == "pop"){
            if(stack.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << stack.top() << '\n';
                stack.pop();
            }
        }
        else if (s == "top"){
            if(stack.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << stack.top() << '\n';
            }
        }
        else if(s == "empty"){
            cout << stack.empty() << '\n';
        }
        else if(s == "size"){
            cout << stack.size() << '\n';
        }
    }
    return 0;
}