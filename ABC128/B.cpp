

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector <pair<string, int> > S[N];
    for(int i = 0;i < N;i++){
        cin >> S[i].first >> S[i].second;
    }
    /*
    for(int i = 0;i < N;i++){
        if(min > S[i].first){
            min = S[i].first;
        }
    } 
    */
    sort(S.first.begin(), S.first.end());
    for(int i = 0; i < N; i++){
    cout << S[i].first << S[i].second << endl;
    }
}