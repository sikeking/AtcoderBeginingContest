
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,M,C;
    vector<int> B(100);
    int answer = 0;
    cin >> N >> M >> C;
    for(int i = 0;i < M;i++){
        cin >> B.at(i);
    }
    for(int i = 0;i < N;i++){
        int W = 0;
        vector<int> A(100);
        for(int j = 0;j < M;j++){
            cin >> A.at(j);
            W += B.at(j) * A.at(j);
        }
        if(W + C > 0){
            answer++;
        }
    }
    cout << answer << endl;

}