
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long N;
    cin >> N;
    long long num = -1;
    for(long long i = 1;i <= (long double) sqrt(N)+1;i++){
        if(N % i == 0){
            num += i-1;
            num += (N / i) -1;
        }
    }
    cout << num << endl;
}