 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N,M;
    int min = 1000000;
    int max = 1;
    cin >> N >> M;
    vector<int> L(M);
    vector<int> R(M);
    int Ans=0;
    for(int i = 0;i < M;i++){
        cin >> L[i] >> R[i];
        max = std::max(max,L[i]);
        min = std::min(min,R[i]);
    }
    if(min < max){
        cout << 0 << endl;
    }else{
    cout << min-max+1 << endl; 
    }
}