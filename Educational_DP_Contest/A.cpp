
#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long INF = 1LL << 60;
    int N;
    cin >> N;
    vector<int> h(N);
    vector<int> dp(N);
    for(int i  = 0;i < N;i++){
        cin >> h[i];
        dp[i] = INF;
    }
    dp[0] = 0;
    for(int i = 1;i < N;i++){
        if(i < 2){
            dp[i] = dp[i-1] + abs(h[i] - h[i -1]);
        }else{
            dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]),dp[i-2] + abs(h[i] - h[i-2]));
        }
    }
    cout << dp[N-1] << endl;
}