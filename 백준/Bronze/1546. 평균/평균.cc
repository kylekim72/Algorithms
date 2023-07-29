#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    double a[n];
    double max_val = 0.0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        max_val = max(a[i], max_val);
    }
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        a[i] = a[i] / max_val * 100;
        sum += a[i];
    }
    sum /= n;
    cout << sum << '\n';
    return 0;
}