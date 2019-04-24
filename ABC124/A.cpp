
#include <iostream>

using namespace std;

int main(){
    int A,B;
    int Ans = 0;
    cin >> A >> B;
    if(A > B){
        Ans += A;
        if((A-1) > B){
            Ans += A-1;
        }else
        Ans += B;
    }else{
        Ans += B;
        if((B-1) > A){
            Ans += B-1;
        }else{
            Ans += A;
        }
    }
    cout << Ans << endl;
}