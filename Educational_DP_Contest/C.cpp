
#include <iostream>
#include <algorithm>

using namespace std;

long long dp[100100][3];
long long a[100100][3];

int main(){
    int N;
    cin >> N;
    for(int i = 0;i < N;i++){
        for(int j = 0;j < 3;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < N;i++){
        for(int j = 0;j < 3;j++){
            for(int k = 0;k < 3;k++){
                if(j == k){
                    continue;
                }
                dp[i + 1][k] = max(dp[i + 1][k],dp[i][j] + a[i][k]);
            }
        }
    }
    long long Ans = 0;
    for(int i = 0;i < 3;i++){
        Ans = max(Ans,dp[N][i]);
    }
    cout << Ans << endl;

}