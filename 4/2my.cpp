#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, s=0, cnt=0, result=0;
    cin >> n;

    // n을 10으로 나눈 나머지가 3인 경우
    for(int i=0; i<=n; i++){
        if(i%10==3) cnt+=1;
    }

    s+=1; //3은 그냥 +1 해주고 10의 자리부터 계산
    for(int i=13; i<=53; i++){
        if(i%10==3) s+=1;
        else if(i/10==3) s+=1;
    }
    //경우의 수 잘 생각하기
    // minute과 second에 동시에 3이 들어가는 경우를 빼줘야한다.
    result = (n+1-cnt) * (s*60*2 - s*s);
    result += 60*60*cnt;
    
    cout << result << endl;
    return 0;
}