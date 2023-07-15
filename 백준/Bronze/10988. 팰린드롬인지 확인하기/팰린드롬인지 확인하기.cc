#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    string str;
    cin >> str;
    string strtemp;
    strtemp = str;
    reverse(str.begin(), str.end());
    if(str.compare(strtemp) == 0){
        cout << 1;
        return 0;
    }
    cout << 0;
}