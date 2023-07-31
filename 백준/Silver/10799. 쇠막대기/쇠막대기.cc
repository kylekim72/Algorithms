#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string str;
    stack<int> s;
    getline(cin,str);
    int ans = 0;
    int size = str.size();
    for(int i=0; i<size; i++){
        if(str[i] == '('){
            s.push(i);
        }
        else{
            if(s.top()+1 == i){
                s.pop();
                ans += s.size();
            }
            else{
                s.pop();
                ans++;
            }
        }
    }
    cout << ans;
}