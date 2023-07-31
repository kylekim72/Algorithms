#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin >> k;
    stack<int> s;
    for (int i = 0; i < k; ++i) {
        int n;
        cin >> n;
        if(n == 0) s.pop();
        else s.push(n);
    }
    int ans = 0;
    while(!s.empty()){
        ans += s.top();
        s.pop();
    }
    cout << ans << '\n';
    return 0;
}