
#include <iostream>

using namespace std;

int main(){
    string a,b,c;
    int a_count = 0;
    int b_count = 0;
    int c_count = 0;
    char turn = 'a';
    cin >> a;
    cin >> b;
    cin >> c;
    while(true){
        if(turn == 'a'){
            if(a_count == a.length()){
                cout << 'A' << endl;
                break;
            }
            turn = a[a_count];
            a_count++;
        }else if(turn == 'b'){
            if(b_count == b.length()){
                cout << 'B' << endl;
                break;
            }
            turn = b[b_count];
            b_count++;
        }else{
            if(c_count == c.length()){
                cout << 'C' << endl;
                break;
            }
            turn = c[c_count];
            c_count++;
        }
    }

}