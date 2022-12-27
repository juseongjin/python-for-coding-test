#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,cnt=0;
    cin >> n >> k;

    while(n!=1){
        if(n%k==0){
            n=n/k;
            cnt+=1;
        } 
        else{
            n-=1;
            cnt+=1;
        } 
    }
    cout << cnt << endl;
    return 0;
}