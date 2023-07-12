#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> a[1001]; // Adjacent List
bool check[1001]; // check visit

void dfs(int node){
    check[node] = true;
    cout << node << ' '; // print node
    int size = a[node].size();
    for (int i = 0; i < size; ++i) { // for every node
        int next = a[node][i];
        if(!check[next]){ // if check == false
            dfs(next); // do dfs
        }
    }
}

void bfs(int start){
    memset(check, false, sizeof(check)); // initialize check(dfs already used)
    check[start] = true;
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << ' '; // print node
        int size = a[node].size();
        for(int i=0; i<size; i++){ // for every node
            int next = a[node][i];
            if(!check[next]){ // if check == false
                check[next] = true;
                q.push(next); // do bfs(push into queue)
            }
        }

    }
}

int main() {
    int n,m,v;
    cin >> n >> m >> v;
    for (int i = 0; i < m; ++i) {
        int source,target;
        cin >> source >> target;
        a[source].push_back(target);
        a[target].push_back(source);
    }
    for(int i=1; i<=n; i++){
        sort(a[i].begin(), a[i].end());
    }
    dfs(v);
    cout << '\n';
    bfs(v);
    return 0;
}
