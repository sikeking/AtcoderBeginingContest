
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long INF = 1LL << 60;
    int N,K;
    cin >> N >> K;
    vector<int> h(N);
    vector<long long> dp(N+K,INF);

    for(int i = 0;i < N;i++){
        cin >> h[i];
    }
    dp[0] = 0;
    for(int i = 0;i < N;i++){
        for(int j = 1;j <= K;j++){
            dp[i + j] = min(dp[i + j],dp[i] + abs(h[i + j] - h[i]));
        }
    }
    cout <<  dp[N - 1] << endl;

}