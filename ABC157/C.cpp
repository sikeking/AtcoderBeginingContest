
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N,M;
    int S = 0;
    cin >> N >> M;
    int s[M];
    int c[M];
    bool flag = 0;
    for(int i = 0;i < M;i++){
        cin >> s[i] >> c[i];
        for(int j = 0;j < i;j++){
            if(s[i] == s[j]){
                if(c[i] != c[j]){
                    S = -1;
                    flag = 1;
                }else if(c[i] == c[j]){
                    c[i] = 0;
                }
            }
        }
        if(flag != 1){
            S += c[i] *  pow(10, (N - s[i]));
        }
    }
    if(N == 1){
        cout << S << endl;
    }else{
        if(S / pow(10, N-1) == 0){
            cout << "-1" << endl;
        }else{
            cout << S << endl;
        }
    }
}