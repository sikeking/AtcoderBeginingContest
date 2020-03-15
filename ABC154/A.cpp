
#include <iostream>

using namespace std;

int main(){
    string s, t, u;
    int A, B;
    cin >> s >> t;
    cin >> A >> B;
    cin >> u;
    if(s == u){
        cout << A-1 <<" "<< B << endl;
    }else if(t == u){
        cout << A << " " << B-1 << endl;
    }
}