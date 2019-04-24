

#include <iostream>

using namespace std;

int main(){
    double M;

    cin >> M;
    float m = M / 1000;
    if(m < 0.1){
        cout << 00 << endl;
    }else if(0.1 <= m && m <= 5){
        if(m < 1){
            cout << 0 << m * 10 << endl;
        }else{
            cout << m * 10 << endl;
        }
    }else if(6 <= m && m <= 30){
        cout << m + 50 << endl;
    }else if(35 <= m && m <= 70){
        cout << (m - 30) / 5 + 80 << endl;
    }else{
        cout << 89 << endl;
    }
}