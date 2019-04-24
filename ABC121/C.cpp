
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long N,M;
    long Ans = 0;
    cin >> N >> M;
    vector<pair<long, long> > Energy_Drink(N);
    for(long i = 0;i < N;i++){
        long a,b;
        cin >> a >> b;
        Energy_Drink[i] = make_pair(a,b);
    }
    sort(Energy_Drink.begin(),Energy_Drink.end());
    for(long i = 0;M > 0;i++){
        if(M < Energy_Drink[i].second){
            Ans += M * Energy_Drink[i].first;
            break;
        }
        M -= Energy_Drink[i].second;
        Ans += Energy_Drink[i].second * Energy_Drink[i].first;
    }
    cout << Ans << endl;
}