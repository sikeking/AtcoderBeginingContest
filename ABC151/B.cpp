
#include <iostream>

using namespace std;

int main(){
    int N, K, M;
    cin >> N >> K >> M;
    int S = 0;
    for(int i = 0;i < N-1;i++){
        int a;
        cin >> a;
        S += a;
    }
    if(N * M - S <= K && 0 <= N * M - S){
        cout << N * M - S << endl;
    }else if(N * M - S < 0){
        cout << "0" << endl;
    }else{
        cout << "-1" <<endl;
    }

}