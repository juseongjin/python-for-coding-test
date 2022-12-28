#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K,M,i;
    int result=0;
    vector<int> v;
    cin >> N >> M >> K;
    for(i=0;i<N;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    int first=v[N-1];
    int second=v[N-2];

    int cnt = M/(K+1);
    M = M%(K+1);
    result += cnt*(first*K+second)+first*M;

    cout << result << endl;
    return 0;
    
}