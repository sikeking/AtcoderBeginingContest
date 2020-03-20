
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long sum[1010][1010];

int main(){
    int N;
    cin >> N;
    vector<pair<long long, long long> > R(N);
    int rc[N] = {0};
    vector<pair<long long , long long> > B(N);
    int bc[N] = {0};
    for(int i = 0;i < N;i++){
        long long a,b;
        cin >> a >> b >> rc[i];
        R[i] = make_pair(a, b);
    }
    for(int i = 0;i < N;i++){
        long long a,b;
        cin >> a >> b >> bc[i];
        B[i] = make_pair(a, b);
    }
    for(int i = 0;i < N;i++){
        for(int j = 0;j < N;j++){
            sum[i][j] = abs(R[i].first - B[j].first) + abs(R[i].second - B[j].second);
        }
    }
    for(int i = 0;i < N;i++){
        
        
    }
}