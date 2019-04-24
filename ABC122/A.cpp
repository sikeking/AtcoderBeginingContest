
#include <iostream>
#include <vector>

using namespace std;

int main(){
    char S;
    char Ans;
    cin >> S;
    if(S == 'A'){
        Ans = 'T';
    }else if(S == 'T'){
        Ans = 'A';
    }else if(S == 'C'){
        Ans = 'G';
    }else{
        Ans = 'C';
    }
    cout << Ans << endl;
}