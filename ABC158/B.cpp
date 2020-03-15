
#include <iostream>

using namespace std;

int main(){
    long N, A, B;
    cin >> N >> A >> B;
    long waru  = N / (A + B);
    long amari = N % (A + B);
    if(A == 0){
        cout << "0" << endl;
    }else if(amari >= A){
        cout << waru * A + A << endl;
    }else if(amari < A){
        cout << waru * A + amari << endl;
    }
}