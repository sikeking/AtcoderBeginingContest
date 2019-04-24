
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    double Ans = 0;
    cin >> N;    
    vector<pair<double, string> > Pochi(N);
    for(int i = 0;i < N;i++){
        double a;
        string b;
        cin >> a >> b;
        Pochi[i] = make_pair(a,b); 
    }
    for(int i = 0;i < N;i++){
        if(Pochi[i].second == "JPY"){
            Ans += Pochi[i].first;
        }else{
            Ans += Pochi[i].first * 380000.0;
        }
    }
    cout << Ans << endl;
}