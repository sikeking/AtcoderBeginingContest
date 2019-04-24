
#include <iostream>
#include <string>

using namespace std;

int main(){
    int N,K;
    string S;
    cin >> N >> K;
    cin >> S;
    int length = 0;
    for(int k = 0;k < N;k++){
        int count = 0;
        string S1 = S;
        if(S1[k] == '0'){
            for(int i = k;i < N;i++){
                if(S1[i] == '0'){
                    for(int j = i;j < N;j++){
                        if(S1[j] == '0'){
                            S1[j] = '1';
                        }else{
                            count++;
                            i = j;
                            break;
                        }
                    }
                }
                //cout << S1 << endl;
                //cout << count << endl;
                if(count == K){
                    //cout << count;
                    break;
                }
            }
        }
        for(int i = 0;i < N;i++){
            if(S1[i] == '1'){
                if(i == N -1){
                    length =max(length,1);
                }
                for(int j = i;j < N;j++){
                    if(S1[j] == '0' || S1[j] == '\0'){
                        //cout << length << endl;
                        if(i == 0){
                            length = max(length,j-i);
                        }else{
                            length = max(length,j-i+1);
                        }
                        i = j;
                    }
                }
            }
        }
    }
    cout << length << endl;
}