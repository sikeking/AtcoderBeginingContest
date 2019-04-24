
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long Function(long X);

int main(){
    long A,B;
    cin >> A >> B;
    long C = Function(A-1) ^ Function(B);
    cout << C << endl;
}

long Function(long X){
    if(X % 2 == 0){
        if((X - 1) % 4 == 1){
            return X ^ 1;
        }else{
            return X;
        }
    }else{
        if(X % 4 == 1){
            return 1;
        }else{
            return 0;
        }
    }
}