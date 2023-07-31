#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;
/*
// Key idea : 직전 문자열을 보고 제일 안쪽 괄호인지 판단할 수 있다.
 제일 안쪽 괄호라면 지금까지 곱해온 temp 값을 더해주고 나누기를 해준다.
 제일 안쪽 괄호가 아니라면, 나누기만 해주자. 이미 값을 더해놓은 상태이기 때문.
*/

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    getline(cin, str);
    int size = str.size();
    stack<char> s;
    int ans = 0;
    int temp = 1;
    for(int i=0; i<size; i++){
        if(str[i] == '('){
            s.push(str[i]);
            temp *= 2;
        }
        else if(str[i] == '['){
            s.push(str[i]);
            temp *= 3;
        }
        else if(str[i] == ')'){
            if(s.empty() || s.top() != '('){
                cout << 0;
                exit(0);
            }
            if(str[i-1] == '('){
                s.pop();
                ans += temp;
                temp /= 2;
            }
            else{
                s.pop();
                temp /= 2;
            }
        }
        else if(str[i] == ']'){
            if(s.empty() || s.top() != '['){
                cout << 0;
                exit(0);
            }
            if(str[i-1] == '['){
                s.pop();
                ans += temp;
                temp /= 3;
            }
            else{
                s.pop();
                temp /= 3;
            }
        }
    }
    if(!s.empty()){
        cout << 0;
        exit(0);
    }
    cout << ans;
    return 0;
}