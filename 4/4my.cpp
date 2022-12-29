#include <bits/stdc++.h>

using namespace std;

int d[50][50];
int arr[50][50];
int n, m, x, y, pose;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

void turn(){
    pose -=1;
    if(pose==-1) pose=3;
}

int main(){
    cin >> n >> m;
    cin >> x >> y >> pose;
    d[x][y] = 1;
    int result=1, turn_time=0;

    //지도 만들기
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x;
            cin >> x;
            arr[i][j] = x;
        }
    }
    
    while(true){
        turn();
        int nx = x + dx[pose];
        int ny = y + dy[pose];
        if(d[nx][ny]==0 && arr[nx][ny]==0){
            d[nx][ny]=1;
            x = nx;
            y = ny;
            result+=1;
            turn_time = 0;
            continue;
        }
        else turn_time+=1;
        if(turn_time==4){
            nx = x - dx[pose];
            ny = y - dy[pose];
            if(arr[nx][ny]==0){
                x = nx;
                y = ny;
            }
            else break;
            turn_time = 0;
        }
    }
    cout << result << endl;
    return 0;
}