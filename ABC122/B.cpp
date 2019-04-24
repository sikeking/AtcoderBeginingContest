
#include <iostream>
#include <vector>

using namespace std;

int main(){
    string S;
    int Ans = 0;
    cin >> S;
    for(int i = 0;i < S.size();i++){
        int count = 0;
        if(S[i] == 'A' || S[i] == 'T' || S[i] == 'C' || S[i] == 'G'){
            for(int j = i;j < S.size();j++){
                if(S[j] == 'A' || S[j] == 'T' || S[j] == 'C' || S[j] == 'G'){
                    //cout << S[j] << endl;
                    count++;
                }else if(j == (S.size() - 1)){
                    Ans = max(Ans,count);
                }else{
                    Ans = max(Ans,count);
                    break;
                }
            }
        }
    }
    cout << Ans << endl;
}