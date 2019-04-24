
#include <iostream>
#include <vector>

using namespace std;

int main(){
    long N,K;
    long Max = 0;
    cin >> N >> K;
    vector<int> L(N);
    for(int i = 0;i < N;i++){
        cin >> L[i];
    }
    for(int i = 0;i < K;i++){
        long Ans = 0;
        for(int j = 0;j < N;j++){
            if(L[j] == i){
                break;
            }else{
                Ans += i ^ L[j];
            }
        }
        Max = std::max(Max,Ans);
    }
    cout << Max << endl;
}