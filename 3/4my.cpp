#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,i,j, result=0;
    cin >> n >> m;

    for(i=0;i<n;i++){
        int tmp=10001;
        for(j=0;j<m;j++){
            int x;
            cin >> x;
            tmp = min(tmp, x);
        }
        result = max(result,tmp);
    }
    cout << result << endl;
    return 0;
}