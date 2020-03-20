
#include <iostream>

using namespace std;

int main(){
    string s,t,u;
    cin >> s >> t >> u;
    s[0] -= 32;
    t[0] -= 32;
    u[0] -= 32;
    cout << s[0] << t[0] << u[0] << endl;
}