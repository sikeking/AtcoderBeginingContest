#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    int Alice = 0;
    int Bob = 0;
    vector<int> Cards(100);
    cin >> N;
    for(int i = 0;i < N;i++){
    cin >> Cards.at(i);
    }
    sort(Cards.begin(),Cards.end());
    reverse(Cards.begin(),Cards.end());
    for(int i = 0;i < N;i++){
        if(i % 2 == 0){
            Alice += Cards.at(i);
        }else{
            Bob += Cards.at(i);
        }
    }
    cout << Alice - Bob << endl;
}