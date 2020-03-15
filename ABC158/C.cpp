
#include <iostream>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    for(int i = 0;i <= 1251;i++){
        if(int(i * 0.08) == A && int(i * 0.1) == B){
            cout  << i << endl; 
            break;
        }else if(i == 1251){
            cout  << "-1" << endl;
        }
    }
}