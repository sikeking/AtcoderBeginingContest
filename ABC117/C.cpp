
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> X(M);
    for(int i = 0;i < M;i++){
        cin >> X[i];
    }
    if(N >= M){
        cout << 0 << endl;
    }else{
        sort(X.begin(),X.end());
        int S = 0;
        vector<int> Y(M-1);
        for(int i = 0;i < M-1;i++){
            Y[i] = X[i+1] - X[i];
            S += Y[i];
        }
        sort(Y.begin(),Y.end(),greater<int>());
        for(int i = 0;i < N-1;i++){
            S -= Y[i];
        }
        cout << S << endl;
    }
}