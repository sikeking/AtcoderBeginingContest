
#include <iostream>
#include <algorithm>

using namespace std;

long long INF = 1LL << 60;

long long dp[110][100100];

int main(){
    int N;
    long long W;
    long long weight[110], value[110];
    cin >> N >> W;
    for(int i = 0;i < N;i++){
        cin >> weight[i] >> value[i];
    }
    for(int i = 0; i < 110;i++){
        for(int j = 0;j < 100100;j++){
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;

    for(int i= 0; i < N;i++){
        for(int j = 0;j < 100100; j++){
            if(j - value[i] >= 0){
                dp[i + 1][j] = min(dp[i+1][j],dp[i][j - value[i]] + weight[i]);
            }
            dp[i + 1][j] = min(dp[i+1][j], dp[i][j]);
        }
    }
    long long Ans = 0;
    for(int i = 0;i < 100100;i++){
        if(dp[N][i] <= W){
            Ans = i;
        }
    }
    cout << Ans << endl;
}