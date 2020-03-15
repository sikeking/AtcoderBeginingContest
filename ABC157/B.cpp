
#include <iostream>

using namespace std;

int main(){
    int A[3][3];
    bool B[3][3] = 0;
    int N;
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            cin >> A[i][j];
        }
    }
    cin >> N;
    for(int i = 0;i < N;i++){
        int a;
        cin >> a;
        for(int j = 0;j < 3;j++){
            for(int k = 0;k < 3;k++){
                if(a == A[j][k]){
                    B[j][k] == 1;
                }
            }
        }
    }
}