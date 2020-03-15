
#include <iostream>

using namespace std;

int main(){
    int H, N;
    int S = 0;
    cin >> H >> N;
    for(int i = 0;i < N;i++){
        int a;
        cin >> a; 
        S += a; 
    }
    if(H <= S){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


}