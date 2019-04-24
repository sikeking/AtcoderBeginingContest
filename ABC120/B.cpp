
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int A,B,K;
    cin >> A >> B >> K;
    int C;
    vector<int> divisor; 
    if(A > B){
        C = B;
    }else{
        C = A;
    }
    for(int i = C;i > 0;i--){
        if(A % i == 0 && B % i == 0){
            divisor.push_back(i);
        }
    }
    cout << divisor.at(K-1) << endl;
}