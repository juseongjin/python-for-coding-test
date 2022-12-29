#include <bits/stdc++.h>

using namespace std;

string now;
int dx[8] = {1,1,-1,-1,2,2,-2,-2};
int dy[8] = {-2,2,-2,2,-1,1,-1,1};

int main(){
    cin >> now;
    //문자열 정수로 변환하는 방식
    int nowX = now[0] - 'a' + 1;
    int nowY = now[1] - '0';
    int result=0;

    //!= 연산을 사용하면 위치가 minus인 경우도 count될 수 있으니 범위로 판별하자.
    for(int i=0; i<8; i++){
        if(nowX+dx[i]>0 && nowX+dx[i]<9){
            if(nowY+dy[i]>0 && nowY+dy[i]<9)result++;
        }
    }
    cout << result << endl;
}