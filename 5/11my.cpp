#include <bits/stdc++.h>

using namespace std;

int n,m, i, j, result;
int graph[201][201];
int dx[]={0,1,0,-1}; //남 or 북 이동
int dy[]={1,0,-1,0}; //동 or 서 이동

int bfs(int x, int y){
    queue<pair<int ,int>> que;
    que.push({x,y});
    while(!que.empty()){
        int x = que.front().first;
        int y = que.front().second;
        que.pop();
        for(int k=0; k<4; k++){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx<0 || nx>n || ny<0 || ny>m) continue;
            if(graph[nx][ny]==0) continue;
            if(graph[nx][ny]==1){
                graph[nx][ny] = graph[x][y] + 1;
                que.push({nx,ny});
            }
        }
    }
    return graph[n-1][m-1];
}

int main(){
    cin >> n >> m;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%1d", &graph[i][j]);
        }
    }

    cout << bfs(0,0) << endl;

    return 0;
}