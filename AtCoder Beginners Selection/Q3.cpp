
#include <iostream>

using namespace std;

int main(){
    int Answer = 0;
    string S;
    cin >> S;
    for(int i = 0;i < 3;i++){
        if(S.at(i) == '1'){
            Answer++;
        }
    }
    cout << Answer << endl;
}