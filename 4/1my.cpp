#include <bits/stdc++.h>

#define L 0
#define R 1
#define U 2
#define D 3

using namespace std;

int main(){
    int n;
    int startX=1, startY=1;
    string key;
    char mode[4] = {'L','R','U','D'};
    cin >> n;
    cin.ignore();
    getline(cin, key);

    for(int i=0; i<key.size(); i++){
        for(int j=0; j<4; j++){
            if(key[i]==mode[j]){
                if(key[i]=='L'){
                    if(startX==1) continue;
                    startX-=1;
                }
                else if(key[i]=='R'){
                    if(startX==n) continue;
                    startX+=1;
                }
                else if(key[i]=='U'){
                    if(startY==1) continue;
                    startY-=1;
                }
                else{
                    if(startY==n) continue;
                    startY+=1;
                }
        
            }
        }
    }
    cout << startY << " " << startX << endl;
}