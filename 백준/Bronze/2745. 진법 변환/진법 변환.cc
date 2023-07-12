#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int b;
    string str;
    cin >> str >> b;
    int len = str.length();
    int ans = 0;
    len--;
    //printf("%d", str[0] - 55);
    //exit(0);
    for(int i = 0; i < str.length(); i++){
        char temp = str[i];
        if(temp >= '0' && temp <= '9') temp = temp - '0';
        else temp = temp + 10 - 'A';
        ans += (int)temp * (int)pow(b, len);
        len--;
    }
    cout << ans;
}