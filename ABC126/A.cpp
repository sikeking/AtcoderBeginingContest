
#include <iostream>

using namespace std;

int main(){

    int N,K;
    string S;
    cin >> N >> K;
    cin >> S;
    for(int i = 0;i < S.size();i++){
        if(i == K-1){
            S[i] += 32;
        }
        cout << S[i];
    }
    cout << endl;
}