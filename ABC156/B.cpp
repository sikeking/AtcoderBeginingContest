
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    for(int i = 0;;i++){
        if(int(N / pow(K,i)) == 0){
            cout << i << endl;
            break;
        }
    }
}