
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    long double N,K;
    long double S = 0;
    cin >> N >> K;
    for(int i = 1;i <= N;i++){
        long double T = i;
        long double c = 1.0/N;
        while(true){
            if(T < K){
                T *= 2;
                c /= 2;
            }else{
                break;
            }
        }
        S += c;
    }
    cout <<fixed<<setprecision(12)<< S << endl;

}