
#include <iostream>

using namespace std;

int main(){
    int R,G,B,N;
    int tmp = 0;
    cin >> R >> G >> B >> N;
    for(int i = 0;i <= N/R;i++){
        if(i*R == N){
            tmp++;
            continue;
        }
        for(int j = 0;j <= N/G;j++){
            if((i * R) + (j * G) == N){tmp++;
            continue;
            }
            for(int k = 0;k <= N/B;k++){
                if(((i * R) + (j * G) + (k * B)) == N){
                    tmp++;
                }
            }
        }
    }
    cout << tmp << endl;
}