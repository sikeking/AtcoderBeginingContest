
#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    cin >> S;
    int Ans1 = 0;
    int Ans2 = 0;
    for(int i = 0;i < S.size();i++){
        if(i % 2 == 0 && S[i] == '1'){
            Ans1++;
        }else if(i % 2 == 1 && S[i] == '0'){
            Ans1++;
        }
    }
    for(int i = 0;i < S.size();i++){
        if(i % 2 == 0 && S[i] == '0'){
            Ans2++;
        }else if(i % 2 == 1 && S[i] == '1'){
            Ans2++;
        }
    }
    if(Ans1 > Ans2){
        cout << Ans2 << endl;
    }else{
        cout << Ans1 << endl;
    }
}