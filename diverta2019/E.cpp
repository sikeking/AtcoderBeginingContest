
#include <iostream>

using namespace std;

int main(){
    long N;
    cin >> N;
    int a = 0;
    for(int i = 0;i < N;i++){
        int b;
        cin >> b;
        a = a ^ b;
    }
    cout << a << endl;
}