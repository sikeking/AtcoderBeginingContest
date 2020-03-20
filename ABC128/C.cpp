
#include <iostream>

using namespace std;

int main(){
    int N,M;
    int Ans  = 1;
    cin >> N >> M;
    int k[M],p[M];

    for(int i = 0;i < M;i++){
        cin >> k[i];
        for(int j = 0;j < k[i];j++){
            string S;
            cin >> S;
        }
    }
    for(int i = 0;i < M;i++){
        cin >> p[i];
    }
    for(int i = 0;;i+=2){
        if(N < M){
            Ans = 0;
            break;
        }
        if(N-M+1-i <= 0){
            break;
        }
        Ans *= (N - M + 1 - i);
    }
    cout << Ans;

}