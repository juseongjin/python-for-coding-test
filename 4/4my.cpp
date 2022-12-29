#include <bits/stdc++.h>

using namespace std;

int n, m, x, y, pose;

int main(){
    cin >> n >> m;
    cin >> x >> y >> pose;
    int map[n][m]={0,};
    int result=1;
    //지도 만들기
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> map[i][j];
        }
    }
    
    while(true){
        if(map[x][y-1]==0 || map[x][y+1]==0 || map[x-1][y]==0 || map[x+1][y]==0){
            if(pose==0){
                if(map[x][y-1]==0){
                    map[x][y]=1;
                    result+=1;
                    y-=1;
                }
                pose=3;
            }
            else if(pose==3){
                if(map[x+1][y]==0){
                    map[x][y]=1;
                    result+=1;
                    x+=1;
                }
                pose=2;
            }
            else if(pose==2){
                if(map[x][y+1]==0){
                    map[x][y]=1;
                    result+=1;
                    y+=1;
                }
                pose=1;
            }
            else if(pose==1){
                if(map[x-1][y]==0){
                    map[x][y]=1;
                    result+=1;
                    x-=1;
                }
                pose=0;
            }
        }
        else break;
    }
    cout << result << endl;
    return 0;
}