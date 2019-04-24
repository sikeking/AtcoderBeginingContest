
#include <iostream>
#include <vector>

using namespace std;

int main(){
    string S;
    cin >> S;
    if(S[5] == '0'){
        if(S[6] <= '4'){
            cout << "Heisei" << endl;
        }else{
            cout << "TBD" << endl;
        }
    }else{
        cout << "TBD" << endl;
    }
}