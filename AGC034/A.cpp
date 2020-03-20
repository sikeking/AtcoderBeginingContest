
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    int A,B,C,D;
    bool flag = 0;
    cin >> N >> A >> B >> C >> D;
    string S;
    cin >> S;
    if(S[D-2] != '#' && S[D] != '#'){
        cout << "Yes" << endl; 
    }else{
        cout << "No" << endl;
    }
}