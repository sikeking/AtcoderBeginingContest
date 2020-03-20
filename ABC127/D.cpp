
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int N,M;

    cin >> N >> M;
    vector<long> S;
    long Ans = 0;


    for(int i = 0;i < N;i++){
        long a;
        cin >> a;
        S.push_back(a);
    }

    for(int i = 0;i < M;i++){
        long B,C;
        cin >> B >> C;
        for(long j = 0;j < B;j++){
            S.push_back(C);
        }
    }

    sort(S.begin(),S.end());

    for(auto i = S.size();;i--){
        if(N+1 == 0) break;
        Ans += S[i-1];
        N--;
    }

    cout << Ans << endl;




}
