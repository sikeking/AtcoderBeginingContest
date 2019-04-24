#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
    vector<vector<int> > Result(N, vector<int>(N));
    for(int i = 0;i < N;i++){
        for(int j = 0;j < N;j++){
            bool is_flag = true;
            for(int k = 0;k < M;k++){
                if(A.at(k) == i+1 && B.at(k) == j+1){
                    cout << "o";
                    is_flag = false;
                    break;
                }else if(A.at(k) == j+1 && B.at(k) == i+1){
                    cout << "x";
                    is_flag = false;
                    break;
                }
            }
            if(is_flag) cout << "-";
            if(j != N-1)cout << " ";
        }
        cout << endl;
    }
  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
}
