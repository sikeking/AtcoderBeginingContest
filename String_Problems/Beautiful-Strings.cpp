
#include <iostream>

using namespace std;

int main(){
    string w;
    cin >> w;
    for(int c = 0;c < 26;c++){
        int count = 0;
        for(int i = 0;i < w.length();i++){
            if(w[i] == 'a' + c){
                count++;
            }
        }
        if(count % 2 != 0){
            cout << "No" << endl;
            break;
        }else if(c == 25){
            cout << "Yes" << endl;
        }
    }
}