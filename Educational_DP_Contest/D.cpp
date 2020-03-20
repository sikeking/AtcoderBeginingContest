
#include <iostream>
#include <algorithm>

using namespace std;

long long INF = 1LL << 60;
long long dp[110][100100] = {0};
long long weight[110], value[110];

int main(){
    int N;
    long long W;
    cin >> N >> W;
    for(int i = 0;i < N;i++){
        cin >> weight[i] >> value[i];
    }
    for(int i = 0;i < N; i++){
        for(int j = 0;j <= W; j++){
            if(j - weight[i] >= 0){
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j - weight[i]] + value[i]);
            }
            dp[i + 1][j] = max(dp[i+1][j],dp[i][j]);
        }
    }
    cout << dp[N][W] << endl;
}