#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int a[100][100];
bool check[100][100];
int dist[100][100];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int n,m;

void bfs(int x, int y){
    queue<pair<int,int>> q;
    check[x][y] = true;
    q.push(make_pair(x,y));
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(0 <= nx && nx < n && 0 <= ny && ny < m){
            if(a[nx][ny] != 0 && check[nx][ny] == false){
                check[nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
                q.push(make_pair(nx,ny));
            }
        }
    }
    }
}


int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%1d",&a[i][j]);
        }
    }
    check[0][0] = true;
    dist[0][0] = 1;
    bfs(0,0);
    cout << dist[n-1][m-1];
}