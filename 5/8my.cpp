#include <bits/stdc++.h>

using namespace std;

bool visited[9];
vector<int> s[9];

void dfs(int x){
    visited[x]=true;
    cout << x << ' ';
    for(int i=0; i< s[x].size(); i++){
        int y = s[x][i];
        if(!visited[y]) dfs(y);
    }
}

int main(){
    s[1].push_back(2);
    s[1].push_back(3);
    s[1].push_back(8);

    s[2].push_back(1);
    s[2].push_back(7);

    s[3].push_back(1);
    s[3].push_back(4);
    s[3].push_back(5);

    s[4].push_back(3);
    s[4].push_back(5);
    
    s[5].push_back(3);
    s[5].push_back(4);

    s[6].push_back(7);

    s[7].push_back(2);
    s[7].push_back(6);
    s[7].push_back(8);

    s[8].push_back(7);

    dfs(1);
    return 0;
}