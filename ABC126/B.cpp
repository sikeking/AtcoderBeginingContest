
#include <iostream>

using namespace std;

int main(){
    int S;
    cin >> S;
    if(0 < S/100 && S/100 < 13){
        if(0 < S%100 && S%100 < 13){
            cout << "AMBIGUOUS" <<endl;
        }else{
            cout << "MMYY" << endl;
        }
    }else{
        if(0 < S%100 && S%100 < 13){
            cout << "YYMM" <<endl;
        }else{
            cout << "NA" << endl;
        }
    }
}