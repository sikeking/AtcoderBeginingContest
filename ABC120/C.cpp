
#include <iostream>
#include <vector>

using namespace std;

int main(){
    string S;
    cin >> S;
    int Zeronum = 0;
    int Onenum = 0;
    for(int i = 0;S[i] != '\0';i++){
        if(S[i] == '0'){
            Zeronum+= 2;
        }else{
            Onenum+= 2;
        }
    }
    if(Zeronum > Onenum){
        cout << Onenum << endl;
    }else{
        cout << Zeronum << endl;
    }
}